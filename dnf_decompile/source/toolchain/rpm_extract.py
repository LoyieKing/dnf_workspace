#!/usr/bin/env python3
"""纯 Python RPM 解包器（无系统依赖，只需 python3 + zlib/bz2/lzma 内置模块）。

用法:
  python3 rpm_extract.py <package.rpm> <target_dir>

把 RPM 的 cpio 载荷解包到 target_dir（路径保留 ./usr/... 相对结构，
与 bsdtar 解包结果一致）。支持 gzip/bzip2/xz/未压缩载荷。
"""
import bz2
import gzip
import lzma
import os
import shutil
import struct
import sys
import zlib


def rpm2cpio(path):
    """返回 (cpio_bytes, compression) 或抛异常。"""
    with open(path, 'rb') as fh:
        data = fh.read()
    if data[:4] != b'\xed\xab\xee\xdb':
        raise ValueError('not an RPM package: %s' % path)
    pos = 96  # lead

    def read_header():
        nonlocal pos
        if data[pos:pos + 4] not in (b'\x8e\xad\xe8\x01', b'\x8e\xad\xe8\x02'):
            raise ValueError('bad header magic at %d' % pos)
        pos += 8  # magic + reserved
        nindex, hsize = struct.unpack('>II', data[pos:pos + 8])
        pos += 8
        pos += nindex * 16 + ((hsize + 7) & ~7)

    read_header()  # signature header
    read_header()  # main header
    # 不同 rpm 版本的 header 数据区填充规则不同（8 对齐 vs 不填充），
    # 在计算起点附近小窗口内扫描真实载荷魔数，避免偏移差 4/8。
    window = data[max(0, pos - 32):pos + 64]
    base = max(0, pos - 32)
    find = window.find
    start = None
    for magic, comp in ((b'\x1f\x8b', 'gzip'),
                        (b'\xfd7zXZ\x00', 'xz'),
                        (b'BZh', 'bzip2'),
                        (b'070701', 'none'),
                        (b'070702', 'none')):
        i = find(magic)
        if i >= 0:
            start, payload_comp = base + i, comp
            break
    if start is None:
        start, payload_comp = pos, 'zlib'
    payload = data[start:]
    if payload_comp == 'gzip':
        return gzip.decompress(payload), 'gzip'
    if payload_comp == 'bzip2':
        return bz2.decompress(payload), 'bzip2'
    if payload_comp == 'xz':
        return lzma.decompress(payload), 'xz'
    if payload_comp == 'none':
        return payload, 'none'
    if payload[:2] == b'\x1f\x8b':
        return gzip.decompress(payload), 'gzip'
    if payload[:3] == b'BZh':
        return bz2.decompress(payload), 'bzip2'
    if payload[:6] == b'\xfd7zXZ\x00':
        return lzma.decompress(payload), 'xz'
    if payload[:6] in (b'\x07\x07\x01\x00', b'\x07\x07\x02\x00'):
        return payload, 'none'
    try:
        return zlib.decompress(payload), 'zlib'
    except Exception:
        raise ValueError('unknown payload compression')


def cpio_newc_extract(archive, target):
    """newc/crc 格式 cpio 解包。头为 110 字节：6 字节魔数 + 13 个 8 位十六进制字段。"""
    pos = 0
    n = len(archive)
    while pos + 110 <= n:
        head = archive[pos:pos + 110]
        magic = head[:6]
        if magic not in (b'070701', b'070702'):
            break  # 结尾填充 / 其它格式

        def f(off):
            return int(head[off:off + 8], 16)

        # newc 字段偏移：ino6 mode14 uid22 gid30 nlink38 mtime46 filesize54
        #               devmajor62 devminor70 rdevmajor78 rdevminor86 namesize94 check102
        mode, fsize, namesize = f(14), f(54), f(94)
        name = archive[pos + 110:pos + 110 + namesize].rstrip(b'\0').decode('utf-8', 'replace')
        # newc：名字字段与头部作为一个整体按 4 字节对齐（data_off = align4(pos+110+namesize)）
        data_off = pos + ((110 + namesize + 3) & ~3)
        file_data = archive[data_off:data_off + fsize]
        entry_size = ((data_off + fsize + 3) & ~3) - pos
        if name == 'TRAILER!!!':
            break
        rel = name.lstrip('./')
        if rel:
            dest = os.path.join(target, rel)
            ftype = mode & 0o170000
            if ftype == 0o040000:  # dir
                os.makedirs(dest, exist_ok=True)
            elif ftype == 0o120000:  # symlink
                os.makedirs(os.path.dirname(dest), exist_ok=True)
                link = file_data.decode('utf-8', 'replace').rstrip('\0')
                if os.path.lexists(dest):
                    os.unlink(dest)
                os.symlink(link, dest)
            elif ftype in (0o100000, 0o060000, 0o020000, 0o010000):  # file
                os.makedirs(os.path.dirname(dest), exist_ok=True)
                with open(dest, 'wb') as out:
                    out.write(file_data)
                try:
                    os.chmod(dest, mode & 0o7777)
                except OSError:
                    pass
        pos += entry_size


def main():
    if len(sys.argv) != 3:
        print(__doc__)
        sys.exit(2)
    rpm, target = sys.argv[1], sys.argv[2]
    os.makedirs(target, exist_ok=True)
    archive, comp = rpm2cpio(rpm)
    cpio_newc_extract(archive, target)
    print('%s -> %s (%s payload)' % (os.path.basename(rpm), target, comp))


if __name__ == '__main__':
    main()
