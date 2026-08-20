# read_info

`_ZN10IndexEntry9read_infoERPh`

`IndexEntry::read_info(unsigned char*&)`

| 类 | 地址 |
|---|---|
| `IndexEntry` | `0x08ac4200` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ac4200  _ZN10IndexEntry9read_infoERPh
#           IndexEntry::read_info(unsigned char*&)
# range [0x08ac4200, 0x08ac4283]
08ac4200 +0x00:  push   %ebp
08ac4201 +0x01:  mov    %esp,%ebp
08ac4203 +0x03:  sub    $0x18,%esp
08ac4206 +0x06:  mov    0x8(%ebp),%eax
08ac4209 +0x09:  lea    0x4(%eax),%edx
08ac420c +0x0c:  mov    0xc(%ebp),%eax
08ac420f +0x0f:  mov    %eax,0x4(%esp)
08ac4213 +0x13:  mov    %edx,(%esp)
08ac4216 +0x16:  call   08ac3832 <_ZL10_mread_strRSsRPh>  ; _mread_str(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, unsigned char*&)
08ac421b +0x1b:  mov    0xc(%ebp),%eax
08ac421e +0x1e:  mov    (%eax),%eax
08ac4220 +0x20:  mov    (%eax),%edx
08ac4222 +0x22:  mov    0x8(%ebp),%eax
08ac4225 +0x25:  mov    %edx,0x8(%eax)
08ac4228 +0x28:  mov    0xc(%ebp),%eax
08ac422b +0x2b:  mov    (%eax),%eax
08ac422d +0x2d:  lea    0x4(%eax),%edx
08ac4230 +0x30:  mov    0xc(%ebp),%eax
08ac4233 +0x33:  mov    %edx,(%eax)
08ac4235 +0x35:  mov    0x8(%ebp),%eax
08ac4238 +0x38:  mov    0x8(%eax),%eax
08ac423b +0x3b:  add    $0x3,%eax
08ac423e +0x3e:  mov    %eax,%edx
08ac4240 +0x40:  and    $0xfffffffc,%edx
08ac4243 +0x43:  mov    0x8(%ebp),%eax
08ac4246 +0x46:  mov    %edx,0xc(%eax)
08ac4249 +0x49:  mov    0xc(%ebp),%eax
08ac424c +0x4c:  mov    (%eax),%eax
08ac424e +0x4e:  mov    (%eax),%edx
08ac4250 +0x50:  mov    0x8(%ebp),%eax
08ac4253 +0x53:  mov    %edx,0x10(%eax)
08ac4256 +0x56:  mov    0xc(%ebp),%eax
08ac4259 +0x59:  mov    (%eax),%eax
08ac425b +0x5b:  lea    0x4(%eax),%edx
08ac425e +0x5e:  mov    0xc(%ebp),%eax
08ac4261 +0x61:  mov    %edx,(%eax)
08ac4263 +0x63:  mov    0xc(%ebp),%eax
08ac4266 +0x66:  mov    (%eax),%eax
08ac4268 +0x68:  mov    (%eax),%edx
08ac426a +0x6a:  mov    0x8(%ebp),%eax
08ac426d +0x6d:  mov    %edx,0x14(%eax)
08ac4270 +0x70:  mov    0xc(%ebp),%eax
08ac4273 +0x73:  mov    (%eax),%eax
08ac4275 +0x75:  lea    0x4(%eax),%edx
08ac4278 +0x78:  mov    0xc(%ebp),%eax
08ac427b +0x7b:  mov    %edx,(%eax)
08ac427d +0x7d:  mov    $0x0,%eax
08ac4282 +0x82:  leave
08ac4283 +0x83:  ret
```

## 反编译 C

```c
// IndexEntry::read_info @ 0x8ac4200

/* DWARF original prototype: pack_ret_t read_info(IndexEntry * this, uchar * * mem) */

pack_ret_t __thiscall IndexEntry::read_info(IndexEntry *this,uchar **mem)

{
  _mread_str(&this->name_,mem);
  this->size_ = *(uint *)*mem;
  *mem = *mem + 4;
  this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
  this->crc_ = *(ulong *)*mem;
  *mem = *mem + 4;
  this->offset_ = *(uint *)*mem;
  *mem = *mem + 4;
  return PACK_OK;
}
```
