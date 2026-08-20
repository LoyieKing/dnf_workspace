# get_int

`_ZN9PacketBuf7get_intERi`

`PacketBuf::get_int(int&)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858d0f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858d0f0  _ZN9PacketBuf7get_intERi
#           PacketBuf::get_int(int&)
# range [0x0858d0f0, 0x0858d23f]
0858d0f0 +0x000:  push   %ebp
0858d0f1 +0x001:  mov    %esp,%ebp
0858d0f3 +0x003:  sub    $0x38,%esp
0858d0f6 +0x006:  movl   $0x4,0x4(%esp)
0858d0fe +0x00e:  mov    0x8(%ebp),%eax
0858d101 +0x011:  mov    %eax,(%esp)
0858d104 +0x014:  call   0858cefc <_ZN9PacketBuf10is_len_endEi>  ; PacketBuf::is_len_end(int)
0858d109 +0x019:  test   %al,%al
0858d10b +0x01b:  je     0858d117 <+0x27>
0858d10d +0x01d:  mov    $0x0,%eax
0858d112 +0x022:  jmp    0858d23e <+0x14e>
0858d117 +0x027:  mov    0x8(%ebp),%eax
0858d11a +0x02a:  mov    0x14(%eax),%ecx
0858d11d +0x02d:  mov    0x8(%ebp),%eax
0858d120 +0x030:  mov    0x4(%eax),%eax
0858d123 +0x033:  mov    %eax,%edx
0858d125 +0x035:  lea    (%ecx,%edx,1),%edx
0858d128 +0x038:  movzbl (%edx),%edx
0858d12b +0x03b:  movzbl %dl,%edx
0858d12e +0x03e:  mov    %edx,-0x18(%ebp)
0858d131 +0x041:  lea    0x1(%eax),%edx
0858d134 +0x044:  mov    0x8(%ebp),%eax
0858d137 +0x047:  mov    %edx,0x4(%eax)
0858d13a +0x04a:  mov    0x8(%ebp),%eax
0858d13d +0x04d:  mov    0x14(%eax),%ecx
0858d140 +0x050:  mov    0x8(%ebp),%eax
0858d143 +0x053:  mov    0x4(%eax),%eax
0858d146 +0x056:  mov    %eax,%edx
0858d148 +0x058:  lea    (%ecx,%edx,1),%edx
0858d14b +0x05b:  movzbl (%edx),%edx
0858d14e +0x05e:  movzbl %dl,%edx
0858d151 +0x061:  mov    %edx,-0x14(%ebp)
0858d154 +0x064:  lea    0x1(%eax),%edx
0858d157 +0x067:  mov    0x8(%ebp),%eax
0858d15a +0x06a:  mov    %edx,0x4(%eax)
0858d15d +0x06d:  mov    0x8(%ebp),%eax
0858d160 +0x070:  mov    0x14(%eax),%ecx
0858d163 +0x073:  mov    0x8(%ebp),%eax
0858d166 +0x076:  mov    0x4(%eax),%eax
0858d169 +0x079:  mov    %eax,%edx
0858d16b +0x07b:  lea    (%ecx,%edx,1),%edx
0858d16e +0x07e:  movzbl (%edx),%edx
0858d171 +0x081:  movzbl %dl,%edx
0858d174 +0x084:  mov    %edx,-0x10(%ebp)
0858d177 +0x087:  lea    0x1(%eax),%edx
0858d17a +0x08a:  mov    0x8(%ebp),%eax
0858d17d +0x08d:  mov    %edx,0x4(%eax)
0858d180 +0x090:  mov    0x8(%ebp),%eax
0858d183 +0x093:  mov    0x14(%eax),%ecx
0858d186 +0x096:  mov    0x8(%ebp),%eax
0858d189 +0x099:  mov    0x4(%eax),%eax
0858d18c +0x09c:  mov    %eax,%edx
0858d18e +0x09e:  lea    (%ecx,%edx,1),%edx
0858d191 +0x0a1:  movzbl (%edx),%edx
0858d194 +0x0a4:  movzbl %dl,%edx
0858d197 +0x0a7:  mov    %edx,-0xc(%ebp)
0858d19a +0x0aa:  lea    0x1(%eax),%edx
0858d19d +0x0ad:  mov    0x8(%ebp),%eax
0858d1a0 +0x0b0:  mov    %edx,0x4(%eax)
0858d1a3 +0x0b3:  mov    0x8(%ebp),%eax
0858d1a6 +0x0b6:  mov    (%eax),%eax
0858d1a8 +0x0b8:  test   %eax,%eax
0858d1aa +0x0ba:  je     0858d1b3 <+0xc3>
0858d1ac +0x0bc:  cmp    $0x1,%eax
0858d1af +0x0bf:  je     0858d1d8 <+0xe8>
0858d1b1 +0x0c1:  jmp    0858d1fd <+0x10d>
0858d1b3 +0x0c3:  mov    -0xc(%ebp),%eax
0858d1b6 +0x0c6:  mov    %eax,%edx
0858d1b8 +0x0c8:  shl    $0x18,%edx
0858d1bb +0x0cb:  mov    -0x10(%ebp),%eax
0858d1be +0x0ce:  shl    $0x10,%eax
0858d1c1 +0x0d1:  add    %eax,%edx
0858d1c3 +0x0d3:  mov    -0x14(%ebp),%eax
0858d1c6 +0x0d6:  shl    $0x8,%eax
0858d1c9 +0x0d9:  lea    (%edx,%eax,1),%eax
0858d1cc +0x0dc:  mov    %eax,%edx
0858d1ce +0x0de:  add    -0x18(%ebp),%edx
0858d1d1 +0x0e1:  mov    0xc(%ebp),%eax
0858d1d4 +0x0e4:  mov    %edx,(%eax)
0858d1d6 +0x0e6:  jmp    0858d239 <+0x149>
0858d1d8 +0x0e8:  mov    -0x18(%ebp),%eax
0858d1db +0x0eb:  mov    %eax,%edx
0858d1dd +0x0ed:  shl    $0x18,%edx
0858d1e0 +0x0f0:  mov    -0x14(%ebp),%eax
0858d1e3 +0x0f3:  shl    $0x10,%eax
0858d1e6 +0x0f6:  add    %eax,%edx
0858d1e8 +0x0f8:  mov    -0x10(%ebp),%eax
0858d1eb +0x0fb:  shl    $0x8,%eax
0858d1ee +0x0fe:  lea    (%edx,%eax,1),%eax
0858d1f1 +0x101:  mov    %eax,%edx
0858d1f3 +0x103:  add    -0xc(%ebp),%edx
0858d1f6 +0x106:  mov    0xc(%ebp),%eax
0858d1f9 +0x109:  mov    %edx,(%eax)
0858d1fb +0x10b:  jmp    0858d239 <+0x149>
0858d1fd +0x10d:  mov    0x8(%ebp),%eax
0858d200 +0x110:  mov    (%eax),%eax
0858d202 +0x112:  mov    %eax,0x14(%esp)
0858d206 +0x116:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858d20e +0x11e:  movl   $0x1b7,0xc(%esp)
0858d216 +0x126:  movl   $&_ZZN9PacketBuf7get_intERiE19__PRETTY_FUNCTION__,0x8(%esp)
0858d21e +0x12e:  movl   $"packet_buf.cpp",0x4(%esp)
0858d226 +0x136:  movl   $0x1,(%esp)
0858d22d +0x13d:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858d232 +0x142:  mov    $0x0,%eax
0858d237 +0x147:  jmp    0858d23e <+0x14e>
0858d239 +0x149:  mov    $0x1,%eax
0858d23e +0x14e:  leave
0858d23f +0x14f:  ret
```

## 反编译 C

```c
// PacketBuf::get_int @ 0x858d0f0

/* PacketBuf::get_int(int&) */

undefined4 __thiscall PacketBuf::get_int(PacketBuf *this,int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  cVar1 = is_len_end(this,4);
  if (cVar1 == '\0') {
    uVar3 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar4 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar5 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    uVar6 = (uint)*(byte *)(*(int *)(this + 0x14) + *(int *)(this + 4));
    *(int *)(this + 4) = *(int *)(this + 4) + 1;
    if (*(int *)this == 0) {
      *param_1 = uVar6 * 0x1000000 + uVar5 * 0x10000 + uVar4 * 0x100 + uVar3;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::get_int(int&)",0x1b7,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      *param_1 = uVar3 * 0x1000000 + uVar4 * 0x10000 + uVar5 * 0x100 + uVar6;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
