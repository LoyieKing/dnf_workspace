# put_short

`_ZN9PacketBuf9put_shortERii`

`PacketBuf::put_short(int&, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858c9c8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858c9c8  _ZN9PacketBuf9put_shortERii
#           PacketBuf::put_short(int&, int)
# range [0x0858c9c8, 0x0858cad3]
0858c9c8 +0x000:  push   %ebp
0858c9c9 +0x001:  mov    %esp,%ebp
0858c9cb +0x003:  sub    $0x28,%esp
0858c9ce +0x006:  mov    0xc(%ebp),%eax
0858c9d1 +0x009:  mov    (%eax),%eax
0858c9d3 +0x00b:  movl   $0x2,0x8(%esp)
0858c9db +0x013:  mov    %eax,0x4(%esp)
0858c9df +0x017:  mov    0x8(%ebp),%eax
0858c9e2 +0x01a:  mov    %eax,(%esp)
0858c9e5 +0x01d:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858c9ea +0x022:  test   %al,%al
0858c9ec +0x024:  je     0858c9f8 <+0x30>
0858c9ee +0x026:  mov    $0x0,%eax
0858c9f3 +0x02b:  jmp    0858cad2 <+0x10a>
0858c9f8 +0x030:  mov    0x8(%ebp),%eax
0858c9fb +0x033:  mov    (%eax),%eax
0858c9fd +0x035:  test   %eax,%eax
0858c9ff +0x037:  je     0858ca0b <+0x43>
0858ca01 +0x039:  cmp    $0x1,%eax
0858ca04 +0x03c:  je     0858ca4e <+0x86>
0858ca06 +0x03e:  jmp    0858ca91 <+0xc9>
0858ca0b +0x043:  mov    0x8(%ebp),%eax
0858ca0e +0x046:  mov    0x14(%eax),%ecx
0858ca11 +0x049:  mov    0xc(%ebp),%eax
0858ca14 +0x04c:  mov    (%eax),%eax
0858ca16 +0x04e:  mov    %eax,%edx
0858ca18 +0x050:  add    %edx,%ecx
0858ca1a +0x052:  mov    0x10(%ebp),%edx
0858ca1d +0x055:  mov    %dl,(%ecx)
0858ca1f +0x057:  lea    0x1(%eax),%edx
0858ca22 +0x05a:  mov    0xc(%ebp),%eax
0858ca25 +0x05d:  mov    %edx,(%eax)
0858ca27 +0x05f:  mov    0x8(%ebp),%eax
0858ca2a +0x062:  mov    0x14(%eax),%ecx
0858ca2d +0x065:  mov    0xc(%ebp),%eax
0858ca30 +0x068:  mov    (%eax),%eax
0858ca32 +0x06a:  mov    %eax,%edx
0858ca34 +0x06c:  add    %edx,%ecx
0858ca36 +0x06e:  mov    0x10(%ebp),%edx
0858ca39 +0x071:  and    $0xff00,%edx
0858ca3f +0x077:  sar    $0x8,%edx
0858ca42 +0x07a:  mov    %dl,(%ecx)
0858ca44 +0x07c:  lea    0x1(%eax),%edx
0858ca47 +0x07f:  mov    0xc(%ebp),%eax
0858ca4a +0x082:  mov    %edx,(%eax)
0858ca4c +0x084:  jmp    0858cacd <+0x105>
0858ca4e +0x086:  mov    0x8(%ebp),%eax
0858ca51 +0x089:  mov    0x14(%eax),%ecx
0858ca54 +0x08c:  mov    0xc(%ebp),%eax
0858ca57 +0x08f:  mov    (%eax),%eax
0858ca59 +0x091:  mov    %eax,%edx
0858ca5b +0x093:  add    %edx,%ecx
0858ca5d +0x095:  mov    0x10(%ebp),%edx
0858ca60 +0x098:  and    $0xff00,%edx
0858ca66 +0x09e:  sar    $0x8,%edx
0858ca69 +0x0a1:  mov    %dl,(%ecx)
0858ca6b +0x0a3:  lea    0x1(%eax),%edx
0858ca6e +0x0a6:  mov    0xc(%ebp),%eax
0858ca71 +0x0a9:  mov    %edx,(%eax)
0858ca73 +0x0ab:  mov    0x8(%ebp),%eax
0858ca76 +0x0ae:  mov    0x14(%eax),%ecx
0858ca79 +0x0b1:  mov    0xc(%ebp),%eax
0858ca7c +0x0b4:  mov    (%eax),%eax
0858ca7e +0x0b6:  mov    %eax,%edx
0858ca80 +0x0b8:  add    %edx,%ecx
0858ca82 +0x0ba:  mov    0x10(%ebp),%edx
0858ca85 +0x0bd:  mov    %dl,(%ecx)
0858ca87 +0x0bf:  lea    0x1(%eax),%edx
0858ca8a +0x0c2:  mov    0xc(%ebp),%eax
0858ca8d +0x0c5:  mov    %edx,(%eax)
0858ca8f +0x0c7:  jmp    0858cacd <+0x105>
0858ca91 +0x0c9:  mov    0x8(%ebp),%eax
0858ca94 +0x0cc:  mov    (%eax),%eax
0858ca96 +0x0ce:  mov    %eax,0x14(%esp)
0858ca9a +0x0d2:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858caa2 +0x0da:  movl   $0xa6,0xc(%esp)
0858caaa +0x0e2:  movl   $&_ZZN9PacketBuf9put_shortERiiE19__PRETTY_FUNCTION__,0x8(%esp)
0858cab2 +0x0ea:  movl   $"packet_buf.cpp",0x4(%esp)
0858caba +0x0f2:  movl   $0x1,(%esp)
0858cac1 +0x0f9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858cac6 +0x0fe:  mov    $0x0,%eax
0858cacb +0x103:  jmp    0858cad2 <+0x10a>
0858cacd +0x105:  mov    $0x1,%eax
0858cad2 +0x10a:  leave
0858cad3 +0x10b:  ret
```

## 反编译 C

```c
// PacketBuf::put_short @ 0x858c9c8

/* PacketBuf::put_short(int&, int) */

undefined4 __thiscall PacketBuf::put_short(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  
  cVar3 = is_ptr_end(this,*param_1,2);
  if (cVar3 == '\0') {
    uVar2 = (undefined1)((uint)param_2 >> 8);
    if (*(int *)this == 0) {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
    }
    else {
      if (*(int *)this != 1) {
        LogManager::logFormat
                  (1,"packet_buf.cpp","bool PacketBuf::put_short(int&, int)",0xa6,
                   "m_byte_encoding error %d",*(undefined4 *)this);
        return 0;
      }
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
