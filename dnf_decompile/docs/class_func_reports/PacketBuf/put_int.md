# put_int

`_ZN9PacketBuf7put_intERii`

`PacketBuf::put_int(int&, int)`

| 类 | 地址 |
|---|---|
| `PacketBuf` | `0x0858cad4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858cad4  _ZN9PacketBuf7put_intERii
#           PacketBuf::put_int(int&, int)
# range [0x0858cad4, 0x0858cc67]
0858cad4 +0x000:  push   %ebp
0858cad5 +0x001:  mov    %esp,%ebp
0858cad7 +0x003:  sub    $0x28,%esp
0858cada +0x006:  mov    0xc(%ebp),%eax
0858cadd +0x009:  mov    (%eax),%eax
0858cadf +0x00b:  movl   $0x4,0x8(%esp)
0858cae7 +0x013:  mov    %eax,0x4(%esp)
0858caeb +0x017:  mov    0x8(%ebp),%eax
0858caee +0x01a:  mov    %eax,(%esp)
0858caf1 +0x01d:  call   0858cec4 <_ZN9PacketBuf10is_ptr_endEii>  ; PacketBuf::is_ptr_end(int, int)
0858caf6 +0x022:  test   %al,%al
0858caf8 +0x024:  je     0858cb04 <+0x30>
0858cafa +0x026:  mov    $0x0,%eax
0858caff +0x02b:  jmp    0858cc66 <+0x192>
0858cb04 +0x030:  mov    0x8(%ebp),%eax
0858cb07 +0x033:  mov    (%eax),%eax
0858cb09 +0x035:  test   %eax,%eax
0858cb0b +0x037:  je     0858cb1b <+0x47>
0858cb0d +0x039:  cmp    $0x1,%eax
0858cb10 +0x03c:  je     0858cba5 <+0xd1>
0858cb16 +0x042:  jmp    0858cc2c <+0x158>
0858cb1b +0x047:  mov    0x8(%ebp),%eax
0858cb1e +0x04a:  mov    0x14(%eax),%ecx
0858cb21 +0x04d:  mov    0xc(%ebp),%eax
0858cb24 +0x050:  mov    (%eax),%eax
0858cb26 +0x052:  mov    %eax,%edx
0858cb28 +0x054:  add    %edx,%ecx
0858cb2a +0x056:  mov    0x10(%ebp),%edx
0858cb2d +0x059:  mov    %dl,(%ecx)
0858cb2f +0x05b:  lea    0x1(%eax),%edx
0858cb32 +0x05e:  mov    0xc(%ebp),%eax
0858cb35 +0x061:  mov    %edx,(%eax)
0858cb37 +0x063:  mov    0x8(%ebp),%eax
0858cb3a +0x066:  mov    0x14(%eax),%ecx
0858cb3d +0x069:  mov    0xc(%ebp),%eax
0858cb40 +0x06c:  mov    (%eax),%eax
0858cb42 +0x06e:  mov    %eax,%edx
0858cb44 +0x070:  add    %edx,%ecx
0858cb46 +0x072:  mov    0x10(%ebp),%edx
0858cb49 +0x075:  and    $0xff00,%edx
0858cb4f +0x07b:  sar    $0x8,%edx
0858cb52 +0x07e:  mov    %dl,(%ecx)
0858cb54 +0x080:  lea    0x1(%eax),%edx
0858cb57 +0x083:  mov    0xc(%ebp),%eax
0858cb5a +0x086:  mov    %edx,(%eax)
0858cb5c +0x088:  mov    0x8(%ebp),%eax
0858cb5f +0x08b:  mov    0x14(%eax),%ecx
0858cb62 +0x08e:  mov    0xc(%ebp),%eax
0858cb65 +0x091:  mov    (%eax),%eax
0858cb67 +0x093:  mov    %eax,%edx
0858cb69 +0x095:  add    %edx,%ecx
0858cb6b +0x097:  mov    0x10(%ebp),%edx
0858cb6e +0x09a:  and    $0xff0000,%edx
0858cb74 +0x0a0:  sar    $0x10,%edx
0858cb77 +0x0a3:  mov    %dl,(%ecx)
0858cb79 +0x0a5:  lea    0x1(%eax),%edx
0858cb7c +0x0a8:  mov    0xc(%ebp),%eax
0858cb7f +0x0ab:  mov    %edx,(%eax)
0858cb81 +0x0ad:  mov    0x8(%ebp),%eax
0858cb84 +0x0b0:  mov    0x14(%eax),%ecx
0858cb87 +0x0b3:  mov    0xc(%ebp),%eax
0858cb8a +0x0b6:  mov    (%eax),%eax
0858cb8c +0x0b8:  mov    %eax,%edx
0858cb8e +0x0ba:  add    %edx,%ecx
0858cb90 +0x0bc:  mov    0x10(%ebp),%edx
0858cb93 +0x0bf:  shr    $0x18,%edx
0858cb96 +0x0c2:  mov    %dl,(%ecx)
0858cb98 +0x0c4:  lea    0x1(%eax),%edx
0858cb9b +0x0c7:  mov    0xc(%ebp),%eax
0858cb9e +0x0ca:  mov    %edx,(%eax)
0858cba0 +0x0cc:  jmp    0858cc61 <+0x18d>
0858cba5 +0x0d1:  mov    0x8(%ebp),%eax
0858cba8 +0x0d4:  mov    0x14(%eax),%ecx
0858cbab +0x0d7:  mov    0xc(%ebp),%eax
0858cbae +0x0da:  mov    (%eax),%eax
0858cbb0 +0x0dc:  mov    %eax,%edx
0858cbb2 +0x0de:  add    %edx,%ecx
0858cbb4 +0x0e0:  mov    0x10(%ebp),%edx
0858cbb7 +0x0e3:  shr    $0x18,%edx
0858cbba +0x0e6:  mov    %dl,(%ecx)
0858cbbc +0x0e8:  lea    0x1(%eax),%edx
0858cbbf +0x0eb:  mov    0xc(%ebp),%eax
0858cbc2 +0x0ee:  mov    %edx,(%eax)
0858cbc4 +0x0f0:  mov    0x8(%ebp),%eax
0858cbc7 +0x0f3:  mov    0x14(%eax),%ecx
0858cbca +0x0f6:  mov    0xc(%ebp),%eax
0858cbcd +0x0f9:  mov    (%eax),%eax
0858cbcf +0x0fb:  mov    %eax,%edx
0858cbd1 +0x0fd:  add    %edx,%ecx
0858cbd3 +0x0ff:  mov    0x10(%ebp),%edx
0858cbd6 +0x102:  and    $0xff0000,%edx
0858cbdc +0x108:  sar    $0x10,%edx
0858cbdf +0x10b:  mov    %dl,(%ecx)
0858cbe1 +0x10d:  lea    0x1(%eax),%edx
0858cbe4 +0x110:  mov    0xc(%ebp),%eax
0858cbe7 +0x113:  mov    %edx,(%eax)
0858cbe9 +0x115:  mov    0x8(%ebp),%eax
0858cbec +0x118:  mov    0x14(%eax),%ecx
0858cbef +0x11b:  mov    0xc(%ebp),%eax
0858cbf2 +0x11e:  mov    (%eax),%eax
0858cbf4 +0x120:  mov    %eax,%edx
0858cbf6 +0x122:  add    %edx,%ecx
0858cbf8 +0x124:  mov    0x10(%ebp),%edx
0858cbfb +0x127:  and    $0xff00,%edx
0858cc01 +0x12d:  sar    $0x8,%edx
0858cc04 +0x130:  mov    %dl,(%ecx)
0858cc06 +0x132:  lea    0x1(%eax),%edx
0858cc09 +0x135:  mov    0xc(%ebp),%eax
0858cc0c +0x138:  mov    %edx,(%eax)
0858cc0e +0x13a:  mov    0x8(%ebp),%eax
0858cc11 +0x13d:  mov    0x14(%eax),%ecx
0858cc14 +0x140:  mov    0xc(%ebp),%eax
0858cc17 +0x143:  mov    (%eax),%eax
0858cc19 +0x145:  mov    %eax,%edx
0858cc1b +0x147:  add    %edx,%ecx
0858cc1d +0x149:  mov    0x10(%ebp),%edx
0858cc20 +0x14c:  mov    %dl,(%ecx)
0858cc22 +0x14e:  lea    0x1(%eax),%edx
0858cc25 +0x151:  mov    0xc(%ebp),%eax
0858cc28 +0x154:  mov    %edx,(%eax)
0858cc2a +0x156:  jmp    0858cc61 <+0x18d>
0858cc2c +0x158:  mov    0x8(%ebp),%eax
0858cc2f +0x15b:  mov    (%eax),%eax
0858cc31 +0x15d:  mov    %eax,0x14(%esp)
0858cc35 +0x161:  movl   $"m_byte_encoding error %d",0x10(%esp)
0858cc3d +0x169:  movl   $0xc4,0xc(%esp)
0858cc45 +0x171:  movl   $&_ZZN9PacketBuf7put_intERiiE19__PRETTY_FUNCTION__,0x8(%esp)
0858cc4d +0x179:  movl   $"packet_buf.cpp",0x4(%esp)
0858cc55 +0x181:  movl   $0x1,(%esp)
0858cc5c +0x188:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0858cc61 +0x18d:  mov    $0x1,%eax
0858cc66 +0x192:  leave
0858cc67 +0x193:  ret
```

## 反编译 C

```c
// PacketBuf::put_int @ 0x858cad4

/* PacketBuf::put_int(int&, int) */

undefined4 __thiscall PacketBuf::put_int(PacketBuf *this,int *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  
  cVar4 = is_ptr_end(this,*param_1,4);
  if (cVar4 == '\0') {
    uVar2 = (undefined1)((uint)param_2 >> 8);
    uVar3 = (undefined1)((uint)param_2 >> 0x10);
    uVar6 = (undefined1)((uint)param_2 >> 0x18);
    if (*(int *)this == 0) {
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar3;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar6;
      *param_1 = iVar1 + 1;
    }
    else if (*(int *)this == 1) {
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar6;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar3;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(undefined1 *)(*(int *)(this + 0x14) + iVar1) = uVar2;
      *param_1 = iVar1 + 1;
      iVar1 = *param_1;
      *(char *)(*(int *)(this + 0x14) + iVar1) = (char)param_2;
      *param_1 = iVar1 + 1;
    }
    else {
      LogManager::logFormat
                (1,"packet_buf.cpp","bool PacketBuf::put_int(int&, int)",0xc4,
                 "m_byte_encoding error %d",*(undefined4 *)this);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}
```
