#!/usr/bin/env python3
"""从 Ghidra 反编译生成 guild 缺失的 Packet 构造器（GuildPackets.h + GuildPacketCtor.cpp）。

【已废弃】2026-08-10 工程结构重组后，guild 已按 ORIG .o 布局拆分为
source/DNFServer/GameServer/Guild/（一个主类一个 .h/.cpp，Packet_* 随 handler）。
本脚本输出的旧单体布局（source/guild/GuildPackets.h + GuildPacketCtor.cpp）已不再使用，
仅供历史参考；新树中包类声明与构造器定义已分布到各 handler 文件。

用法: python3 gen_packet_ctors.py /tmp/guild_decomp.c
"""
import re
import sys

DECOMP = sys.argv[1] if len(sys.argv) > 1 else '/tmp/guild_decomp.c'
src = open(DECOMP).read()


def strip_comment(line):
    return re.sub(r'/\*.*?\*/', '', line)


def norm_stmt(stmt):
    s = re.sub(r'\s+', ' ', stmt).strip()
    return s


def parse_body(body, expect_pktheader=True):
    """解析 ctor 体，返回 (id, size, [C++ 语句])。"""
    raw_lines = []
    for raw in body.splitlines():
        raw = strip_comment(raw).strip()
        if not raw:
            continue
        raw_lines.append(raw)
    # 丢弃签名：从第一个 PacketHeader 调用所在行开始
    if expect_pktheader:
        idx = next((i for i, l in enumerate(raw_lines) if 'PacketHeader::PacketHeader' in l), -1)
        if idx < 0:
            return None
        raw_lines = raw_lines[idx:]
    else:
        # 丢弃签名：函数体 '{' 之后开始
        brace = next((i for i, l in enumerate(raw_lines) if l == '{'), -1)
        if brace < 0:
            return None
        raw_lines = raw_lines[brace + 1:]
    # 按行累积语句：';' 且括号深度 0 时结束
    stmts = []
    buf = ''
    depth = 0
    for line in raw_lines:
        buf += line + ' '
        depth += line.count('{') - line.count('}')
        if depth == 0 and ';' in line:
            s = buf.strip()
            if s.endswith(';'):
                s = s[:-1]
            stmts.append(norm_stmt(s))
            buf = ''
    if buf.strip():
        s = buf.strip()
        if s.endswith(';'):
            s = s[:-1]
        if s != '}':
            stmts.append(norm_stmt(s))
    text = ' '.join(stmts)
    pkt_id = pkt_size = None
    if expect_pktheader:
        m = re.search(r'PacketHeader::PacketHeader\(\(PacketHeader \*\)this,(0x[0-9a-f]+|[0-9]+),(0x[0-9a-f]+|[0-9]+)\)', text)
        if not m:
            return None
        pkt_id, pkt_size = int(m.group(1), 0), int(m.group(2), 0)
    out = []
    for s in stmts:
        s = re.sub(r'return\s*$', '', s).strip()
        if not s or (expect_pktheader and s.startswith('PacketHeader::PacketHeader')):
            continue
        out.append(s)
    return pkt_id, pkt_size, out


def stmt_to_cpp(stmt):
    """单条反编译语句 -> C++。"""
    # *this = (T)0x0;（结构体首字节清零）
    m = re.match(r'^\*this = \([A-Za-z0-9_]+\)0x([0-9a-f]+)$', stmt)
    if m:
        return '*(unsigned char*)this = 0x%s;' % m.group(1)
    # 拆开合并行：for {...} memset(...) 或 for {...} ST::ST(...)
    m = re.match(r'^(for .*?\})( .*)$', stmt)
    if m:
        head = stmt_to_cpp(m.group(1))
        tail = stmt_to_cpp(m.group(2).strip())
        if head and tail:
            return ['__multi', head, tail]
    # 字节赋值 this[N] = (Cls)0xNN;
    m = re.match(r'this\[(0x[0-9a-f]+|[0-9]+)\] = \([A-Za-z0-9_]+\)(0x[0-9a-f]+|[0-9]+)$', stmt)
    if m:
        off = int(m.group(1), 16)
        return '*(unsigned char*)((char*)this + 0x%x) = %s;' % (off, m.group(2))
    # undefined2/undefined4 赋值
    m = re.match(r'\*\(undefined2 \*\)\(this \+ (0x[0-9a-f]+|[0-9]+)\) = (0x[0-9a-f]+|[0-9]+)$', stmt)
    if m:
        return '*(unsigned short*)((char*)this + 0x%x) = %s;' % (int(m.group(1), 16), m.group(2))
    m = re.match(r'\*\(undefined4 \*\)\(this \+ (0x[0-9a-f]+|[0-9]+)\) = (0x[0-9a-f]+|[0-9]+)$', stmt)
    if m:
        return '*(unsigned int*)((char*)this + 0x%x) = %s;' % (int(m.group(1), 16), m.group(2))
    # memset
    m = re.match(r'memset\(this \+ (0x[0-9a-f]+|[0-9]+),0,(0x[0-9a-f]+|[0-9]+)\)$', stmt)
    if m:
        return 'memset((char*)this + 0x%x, 0, %s);' % (int(m.group(1), 16), m.group(2))
    m = re.match(r'memset\(this,0,(0x[0-9a-f]+|[0-9]+)\)$', stmt)
    if m:
        return 'memset((char*)this, 0, %s);' % m.group(1)
    # 嵌套结构体 ctor
    m = re.match(r'([A-Za-z_][A-Za-z0-9_]*)::\1\(\([A-Za-z_][A-Za-z0-9_]* \*\)\(this \+ (0x[0-9a-f]+|[0-9]+)\)\)$', stmt)
    if m:
        return 'new ((char*)this + 0x%x) %s;' % (int(m.group(2), 16), m.group(1))
    # 无参方法调用：reset(this) / InitString(this) 等
    m = re.match(r'^([a-zA-Z_][a-zA-Z0-9_]*)\(this\)$', stmt)
    if m:
        return '%s();' % m.group(1)
    # 循环基址赋值：this_00 = (ST_X *)(this + OFF);
    m = re.match(r'[A-Za-z0-9_]+ = \([A-Za-z_][A-Za-z0-9_]* \*\)\(this \+ (0x[0-9a-f]+|[0-9]+)\)$', stmt)
    if m:
        return ('__base', int(m.group(1), 16))
    # 记录数组循环：for (iVar = N; iVar != -1; iVar = iVar + -1) { ST::ST(p); p = p + stride; }
    m = re.match(r'for \([A-Za-z0-9_]+ = (0x[0-9a-f]+); [A-Za-z0-9_]+ != -1; [A-Za-z0-9_]+ = [A-Za-z0-9_]+ \+ -1\) \{ '
                 r'([A-Za-z_][A-Za-z0-9_]*)::\2\((?:\([A-Za-z_][A-Za-z0-9_]* \*\))?([A-Za-z0-9_]+)\); '
                 r'[A-Za-z0-9_]+ = [A-Za-z0-9_]+ \+ (0x[0-9a-f]+|[0-9]+); \}$', stmt)
    if m:
        n = int(m.group(1), 16) + 1
        cls, stride = m.group(2), int(m.group(4), 16)
        return ('__arrayloop', n, stride, cls)
    # 记录数组循环（十进制界）
    m = re.match(r'for \([A-Za-z0-9_]+ = ([0-9]+); [A-Za-z0-9_]+ != -1; [A-Za-z0-9_]+ = [A-Za-z0-9_]+ \+ -1\) \{ '
                 r'([A-Za-z_][A-Za-z0-9_]*)::\2\((?:\([A-Za-z_][A-Za-z0-9_]* \*\))?([A-Za-z0-9_]+)\); '
                 r'[A-Za-z0-9_]+ = [A-Za-z0-9_]+ \+ ([0-9]+); \}$', stmt)
    if m:
        n = int(m.group(1)) + 1
        cls, stride = m.group(2), int(m.group(4))
        return ('__arrayloop', n, stride, cls)
    # 单字节填充循环：for (v = 0; v < N; v = v + 1) { this[v + OFF] = (Cls)VAL; }
    m = re.match(r'for \(([A-Za-z0-9_]+) = 0; \1 < (0x[0-9a-f]+|[0-9]+); \1 = \1 \+ 1\) \{ '
                 r'this\[\1 \+ (0x[0-9a-f]+|[0-9]+)\] = \([A-Za-z0-9_]+\)(0x[0-9a-f]+|[0-9]+); \}$', stmt)
    if m:
        n = int(m.group(2), 16)
        off = int(m.group(3), 16)
        return ('for (int i = 0; i < 0x%x; i++) { *(unsigned char*)((char*)this + i + 0x%x) = %s; }'
                % (n, off, m.group(4)))
    return None


def main():
    pat = re.compile(r'/\* (Packet_[A-Za-z0-9_]+)::\1\(\) \*/\n(.*?)\n\n// ====', re.S)
    packets = {}
    for m in pat.finditer(src):
        cls, body = m.group(1), m.group(2)
        if cls in ('Packet_Monitor_Call_Guild_Members_ToChannel',
                   'Packet_Monitor_Call_Guild_Members_ToChannel_Next',
                   'Packet_Monitor_Call_Guild_All_Members_ToChannel',
                   'Packet_Monitor_Call_Guild_All_Members_ToChannel_Next'):
            continue
        parsed = parse_body(body)
        if parsed:
            packets[cls] = parsed
    # 输出头文件
    hdr = []
    hdr.append('// df_guild_r — 缺失 Packet 构造器声明（由 gen_packet_ctors.py 生成）')
    hdr.append('#ifndef GUILD_PACKETS_H_')
    hdr.append('#define GUILD_PACKETS_H_')
    hdr.append('')
    hdr.append('#include "PacketHeader.h"')
    hdr.append('')
    for cls in sorted(packets):
        hdr.append('class %s : public PacketHeader {' % cls)
        hdr.append('public:')
        hdr.append('    %s();' % cls)
        hdr.append('};')
        hdr.append('')
    hdr.append('#endif  // GUILD_PACKETS_H_')
    # 手工补充（反汇编推导，无反编译 ctor 注释块）
    extra_hdr = '''
class Packet_Answer_Guild_Member_Connection_From_Web : public PacketHeader {
public:
    Packet_Answer_Guild_Member_Connection_From_Web();
};

class Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade : public PacketHeader {
public:
    Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade();
};

class Packet_Monitor_Notice_Guild_Mark_Change_ToUser : public PacketHeader {
public:
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser();
};

class Packet_Send_All_User_Info_Minimum_For_Guild_System : public PacketHeader {
public:
    Packet_Send_All_User_Info_Minimum_For_Guild_System();
};
'''
    hdr.insert(-1, extra_hdr)
    open('source/guild/GuildPackets.h', 'w').write('\n'.join(hdr) + '\n')
    # 输出 cpp
    cpp = []
    cpp.append('// df_guild_r — 缺失 Packet 构造器实现（由 gen_packet_ctors.py 生成）')
    cpp.append('#include <string.h>')
    cpp.append('')
    cpp.append('#include "GuildPackets.h"')
    cpp.append('')
    fails = []
    for cls in sorted(packets):
        pkt_id, pkt_size, stmts = packets[cls]
        cpp.append('%s::%s()' % (cls, cls))
        cpp.append('    : PacketHeader(0x%x, 0x%x)' % (pkt_id, pkt_size))
        cpp.append('{')
        emitted = 0
        pending_base = None
        for s in stmts:
            c = stmt_to_cpp(s)
            items = c if isinstance(c, list) and c and c[0] == '__multi' else [c]
            for item in items:
                if item == '__multi':
                    continue
                if not item:
                    continue
                if isinstance(item, tuple) and item[0] == '__base':
                    pending_base = item[1]
                elif isinstance(item, tuple) and item[0] == '__arrayloop':
                    _, n, stride, cls = item
                    base = pending_base if pending_base is not None else 0
                    cpp.append('    for (int i = 0; i < 0x%x; i++) { new ((char*)this + 0x%x + i * 0x%x) %s; }'
                               % (n, base, stride, cls))
                    emitted += 1
                    pending_base = None
                elif isinstance(item, str):
                    cpp.append('    ' + item)
                    emitted += 1
                else:
                    fails.append((cls, s))
        if emitted == 0:
            cpp.append('    (void)0;')
        cpp.append('}')
        cpp.append('')
    open('source/guild/GuildPacketCtor.cpp', 'w').write(
        '// df_guild_r — 缺失 Packet 构造器实现（由 gen_packet_ctors.py 生成）\n'
        '#include <string.h>\n\n'
        '#include "GuildDomain.h"\n'
        '#include "DNFFunctionLib.h"\n'
        '#include "GuildPackets.h"\n\n' + '\n'.join(cpp) + '''

Packet_Answer_Guild_Member_Connection_From_Web::
    Packet_Answer_Guild_Member_Connection_From_Web()
    : PacketHeader(0x443, 0x5ec)
{
    *(unsigned int*)((char*)this + 0xa) = 0;
    *(unsigned short*)((char*)this + 0xe) = 0;
    memset((char*)this + 0x10, 0, 0x5dc);
}

Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade::
    Packet_Monitor_DB_Change_Unconnected_GuildMember_Grade()
    : PacketHeader(0x42b, 0x33)
{
    *(unsigned char*)((char*)this + 0xa) = 0;
    *(unsigned int*)((char*)this + 0xb) = 0;
    *(unsigned char*)((char*)this + 0x32) = 0xff;
    memset((char*)this + 0x14, 0, 0x1e);
}

Packet_Monitor_Notice_Guild_Mark_Change_ToUser::
    Packet_Monitor_Notice_Guild_Mark_Change_ToUser()
    : PacketHeader(0x3ff, 0x16)
{
    *(unsigned int*)((char*)this + 0xa) = 0xffffffff;
    *(unsigned int*)((char*)this + 0xe) = 0;
}

Packet_Send_All_User_Info_Minimum_For_Guild_System::
    Packet_Send_All_User_Info_Minimum_For_Guild_System()
    : PacketHeader(0x447, 0x16)
{
}

#include "Packet_Guild_Change_Power_War_Point.h"

void Packet_Guild_Change_Power_War_Point::GetUserList(std::vector<unsigned int>& list)
{
    for (int i = 0; i < 8; ++i)
    {
        if (*(int*)((char*)this + i * 4 + 0xb) != 0)
        {
            list.push_back(*(unsigned int*)((char*)this + i * 4 + 0xb));
        }
    }
}
''')
    print('generated %d packet ctors' % len(packets))
    if fails:
        print('UNPARSED STATEMENTS (%d):' % len(fails))
        for cls, s in fails[:25]:
            print('  [%s] %s' % (cls, s))

    # ---- ST 结构体 ctor ----
    st_types = [
        'DnfItemInfo', 'STAttendanceInfo', 'STGuildAgitDBInfo', 'STGuildBoardDBInfo',
        'STGuildCallInfo', 'STGuildCargoDBInfo', 'STGuildCargoLog', 'STGuildDBInfoOnly',
        'STGuildMemerDBInfo', 'STGuildRank', 'STPowerWarPointInfo', 'STUserPoint',
        'STUserRank', 'ST_GuildCreateFromWeb', 'ST_Guild_Mem_Info',
        'ST_Notice_Guild_Enter', 'ST_Notice_Guild_Secede', 'STBlackUserDBType',
        'STGuildSkill', 'STGuildMemberProxy', 'STGuildDBInfo',
        'UpgradeSeparateInfo', 'ReservedCapacity', 'STGuildMemberCharacData',
        'RandomOption', 'RandomOptionField', 'RandomOptionSeed', 'ST_Guild_Mem_Info',
    ]
    st_defs = []
    st_fails = []
    for t in st_types:
        if t in ('ST_Guild_Mem_Info', 'STGuildSkill', 'STGuildMemberProxy',
                 'STGuildDBInfo', 'STGuildDBInfoOnly', 'STGuildAgitDBInfo'):
            continue
        pat = re.compile(r'/\* %s::%s\(\) \*/\n(.*?)\n\n// ====' % (re.escape(t), re.escape(t)), re.S)
        m = pat.search(src)
        if not m:
            st_fails.append((t, 'no decomp ctor'))
            continue
        stmts = parse_body(m.group(1), expect_pktheader=False)
        if not stmts:
            st_fails.append((t, 'parse failed'))
            continue
        st_defs.append('')
        st_defs.append('%s::%s()' % (t, t))
        st_defs.append('{')
        emitted = 0
        pending_base = None
        for s in stmts[2]:
            c = stmt_to_cpp(s)
            items = c if isinstance(c, list) and c and c[0] == '__multi' else [c]
            for item in items:
                if item == '__multi':
                    continue
                if not item:
                    continue
                if isinstance(item, tuple) and item[0] == '__base':
                    pending_base = item[1]
                elif isinstance(item, tuple) and item[0] == '__arrayloop':
                    _, n, stride, cls = item
                    base = pending_base if pending_base is not None else 0
                    st_defs.append('    for (int i = 0; i < 0x%x; i++) { new ((char*)this + 0x%x + i * 0x%x) %s; }'
                                   % (n, base, stride, cls))
                    emitted += 1
                    pending_base = None
                elif isinstance(item, str):
                    st_defs.append('    ' + item)
                    emitted += 1
                else:
                    st_fails.append((t, s))
        st_defs.append('}')
    reset_fns = '''
void RandomOptionField::reset()
{
    m_data[0] = 0;
    m_data[1] = 0;
    m_data[2] = 0;
}

void RandomOptionSeed::reset()
{
    m_data[0] = 0;
}

void RandomOption::reset()
{
    ((RandomOptionField*)this)->reset();
    ((RandomOptionField*)((char*)this + 3))->reset();
    ((RandomOptionField*)((char*)this + 6))->reset();
    ((RandomOptionSeed*)((char*)this + 9))->reset();
    ((RandomOptionField*)((char*)this + 10))->reset();
    ((RandomOptionSeed*)((char*)this + 0xd))->reset();
}

void UpgradeSeparateInfo::reset()
{
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xe0);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0xdf);
    *(unsigned char*)m_data = (unsigned char)(*(unsigned char*)m_data & 0x3f);
}

unsigned char UpgradeSeparateInfo::GetUpgradeSeparate() const
{
    return (unsigned char)(*(unsigned char*)m_data & 0x1f);
}

void ReservedCapacity::reset()
{
    *(unsigned int*)(m_data + 0) = 0;
    *(unsigned int*)(m_data + 4) = 0;
    m_data[8] = 0;
}

void DnfItemInfo::reset()
{
    m_data[0] = 0;
    *(unsigned int*)(m_data + 1) = 0;
    m_data[5] = 0;
    *(unsigned int*)(m_data + 6) = 0;
    *(unsigned short*)(m_data + 10) = 0;
    *(unsigned int*)(m_data + 0xc) = 0;
    m_data[0x10] = 0;
    *(unsigned short*)(m_data + 0x11) = 0;
    ((RandomOption*)(m_data + 0x1d))->reset();
    ((UpgradeSeparateInfo*)(m_data + 0x2b))->reset();
    ((ReservedCapacity*)(m_data + 0x2c))->reset();
}

STGuildCargoLog::~STGuildCargoLog()
{
}
'''
    open('source/guild/GuildStCtor.cpp', 'w').write(
        '// df_guild_r — 缺失 ST 结构体构造器实现（由 gen_packet_ctors.py 生成）\n'
        '#include <string.h>\n\n'
        '#include "GuildDomain.h"\n'
        '#include "DNFFunctionLib.h"\n\n' + reset_fns + '\n'.join(st_defs) + '\n')
    if st_fails:
        print('ST FAILS (%d):' % len(st_fails))
        for t, s in st_fails[:15]:
            print('  [%s] %s' % (t, s))


if __name__ == '__main__':
    main()
