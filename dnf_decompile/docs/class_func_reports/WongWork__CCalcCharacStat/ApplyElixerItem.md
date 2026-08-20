# ApplyElixerItem

`_ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii`

`WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CCalcCharacStat` | `0x0831e85c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0831e85c  _ZN8WongWork15CCalcCharacStat15ApplyElixerItemEP15_Additioal_infoii
#           WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int)
# range [0x0831e85c, 0x0831e9c9]
0831e85c +0x000:  push   %ebp
0831e85d +0x001:  mov    %esp,%ebp
0831e85f +0x003:  push   %ebx
0831e860 +0x004:  sub    $0x10,%esp
0831e863 +0x007:  cmpl   $0x9,0xc(%ebp)
0831e867 +0x00b:  ja     0831e9c3 <+0x167>
0831e86d +0x011:  mov    0xc(%ebp),%eax
0831e870 +0x014:  shl    $0x2,%eax
0831e873 +0x017:  mov    &data#3426b266(.rodata)(%eax),%eax
0831e879 +0x01d:  jmp    *%eax
0831e87b +0x01f:  mov    0x8(%ebp),%eax
0831e87e +0x022:  movzwl 0x8(%eax),%ecx
0831e882 +0x026:  mov    0x10(%ebp),%eax
0831e885 +0x029:  mov    %eax,%edx
0831e887 +0x02b:  mov    %edx,%eax
0831e889 +0x02d:  shl    $0x2,%eax
0831e88c +0x030:  add    %edx,%eax
0831e88e +0x032:  lea    0x0(,%eax,4),%edx
0831e895 +0x039:  add    %edx,%eax
0831e897 +0x03b:  add    %eax,%eax
0831e899 +0x03d:  lea    (%ecx,%eax,1),%edx
0831e89c +0x040:  mov    0x8(%ebp),%eax
0831e89f +0x043:  mov    %dx,0x8(%eax)
0831e8a3 +0x047:  jmp    0831e9c3 <+0x167>
0831e8a8 +0x04c:  mov    0x8(%ebp),%eax
0831e8ab +0x04f:  movzwl 0xc(%eax),%ecx
0831e8af +0x053:  mov    0x10(%ebp),%eax
0831e8b2 +0x056:  mov    %eax,%edx
0831e8b4 +0x058:  mov    %edx,%eax
0831e8b6 +0x05a:  shl    $0x2,%eax
0831e8b9 +0x05d:  add    %edx,%eax
0831e8bb +0x05f:  lea    0x0(,%eax,4),%edx
0831e8c2 +0x066:  add    %edx,%eax
0831e8c4 +0x068:  add    %eax,%eax
0831e8c6 +0x06a:  lea    (%ecx,%eax,1),%edx
0831e8c9 +0x06d:  mov    0x8(%ebp),%eax
0831e8cc +0x070:  mov    %dx,0xc(%eax)
0831e8d0 +0x074:  jmp    0831e9c3 <+0x167>
0831e8d5 +0x079:  mov    0x8(%ebp),%eax
0831e8d8 +0x07c:  movzwl 0xa(%eax),%ecx
0831e8dc +0x080:  mov    0x10(%ebp),%eax
0831e8df +0x083:  mov    %eax,%edx
0831e8e1 +0x085:  mov    %edx,%eax
0831e8e3 +0x087:  shl    $0x2,%eax
0831e8e6 +0x08a:  add    %edx,%eax
0831e8e8 +0x08c:  lea    0x0(,%eax,4),%edx
0831e8ef +0x093:  add    %edx,%eax
0831e8f1 +0x095:  add    %eax,%eax
0831e8f3 +0x097:  lea    (%ecx,%eax,1),%edx
0831e8f6 +0x09a:  mov    0x8(%ebp),%eax
0831e8f9 +0x09d:  mov    %dx,0xa(%eax)
0831e8fd +0x0a1:  jmp    0831e9c3 <+0x167>
0831e902 +0x0a6:  mov    0x8(%ebp),%eax
0831e905 +0x0a9:  movzwl 0xe(%eax),%ecx
0831e909 +0x0ad:  mov    0x10(%ebp),%eax
0831e90c +0x0b0:  mov    %eax,%edx
0831e90e +0x0b2:  mov    %edx,%eax
0831e910 +0x0b4:  shl    $0x2,%eax
0831e913 +0x0b7:  add    %edx,%eax
0831e915 +0x0b9:  lea    0x0(,%eax,4),%edx
0831e91c +0x0c0:  add    %edx,%eax
0831e91e +0x0c2:  add    %eax,%eax
0831e920 +0x0c4:  lea    (%ecx,%eax,1),%edx
0831e923 +0x0c7:  mov    0x8(%ebp),%eax
0831e926 +0x0ca:  mov    %dx,0xe(%eax)
0831e92a +0x0ce:  jmp    0831e9c3 <+0x167>
0831e92f +0x0d3:  mov    0x8(%ebp),%eax
0831e932 +0x0d6:  mov    (%eax),%edx
0831e934 +0x0d8:  mov    0x10(%ebp),%eax
0831e937 +0x0db:  imul   $0xfa,%eax,%eax
0831e93d +0x0e1:  add    %eax,%edx
0831e93f +0x0e3:  mov    0x8(%ebp),%eax
0831e942 +0x0e6:  mov    %edx,(%eax)
0831e944 +0x0e8:  jmp    0831e9c3 <+0x167>
0831e946 +0x0ea:  mov    0x8(%ebp),%eax
0831e949 +0x0ed:  mov    0x4(%eax),%edx
0831e94c +0x0f0:  mov    0x10(%ebp),%eax
0831e94f +0x0f3:  imul   $0xfa,%eax,%eax
0831e955 +0x0f9:  add    %eax,%edx
0831e957 +0x0fb:  mov    0x8(%ebp),%eax
0831e95a +0x0fe:  mov    %edx,0x4(%eax)
0831e95d +0x101:  jmp    0831e9c3 <+0x167>
0831e95f +0x103:  mov    0x8(%ebp),%eax
0831e962 +0x106:  mov    0x42(%eax),%ecx
0831e965 +0x109:  mov    0x10(%ebp),%edx
0831e968 +0x10c:  mov    %edx,%eax
0831e96a +0x10e:  shl    $0x2,%eax
0831e96d +0x111:  add    %edx,%eax
0831e96f +0x113:  add    %eax,%eax
0831e971 +0x115:  lea    (%ecx,%eax,1),%edx
0831e974 +0x118:  mov    0x8(%ebp),%eax
0831e977 +0x11b:  mov    %edx,0x42(%eax)
0831e97a +0x11e:  jmp    0831e9c3 <+0x167>
0831e97c +0x120:  movl   $0x0,-0x8(%ebp)
0831e983 +0x127:  jmp    0831e9b8 <+0x15c>
0831e985 +0x129:  mov    -0x8(%ebp),%ecx
0831e988 +0x12c:  mov    -0x8(%ebp),%edx
0831e98b +0x12f:  mov    0x8(%ebp),%eax
0831e98e +0x132:  add    $0x8,%edx
0831e991 +0x135:  movzwl (%eax,%edx,2),%eax
0831e995 +0x139:  mov    %eax,%ebx
0831e997 +0x13b:  mov    0x10(%ebp),%eax
0831e99a +0x13e:  mov    %eax,%edx
0831e99c +0x140:  mov    %edx,%eax
0831e99e +0x142:  shl    $0x2,%eax
0831e9a1 +0x145:  add    %edx,%eax
0831e9a3 +0x147:  add    %eax,%eax
0831e9a5 +0x149:  lea    (%ebx,%eax,1),%eax
0831e9a8 +0x14c:  mov    %eax,%edx
0831e9aa +0x14e:  mov    0x8(%ebp),%eax
0831e9ad +0x151:  add    $0x8,%ecx
0831e9b0 +0x154:  mov    %dx,(%eax,%ecx,2)
0831e9b4 +0x158:  addl   $0x1,-0x8(%ebp)
0831e9b8 +0x15c:  cmpl   $0x3,-0x8(%ebp)
0831e9bc +0x160:  setle  %al
0831e9bf +0x163:  test   %al,%al
0831e9c1 +0x165:  jne    0831e985 <+0x129>
0831e9c3 +0x167:  add    $0x10,%esp
0831e9c6 +0x16a:  pop    %ebx
0831e9c7 +0x16b:  pop    %ebp
0831e9c8 +0x16c:  ret
0831e9c9 +0x16d:  nop
```

## 反编译 C

```c
// WongWork::CCalcCharacStat::ApplyElixerItem @ 0x831e85c

/* WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info*, int, int) */

void WongWork::CCalcCharacStat::ApplyElixerItem(_Additioal_info *param_1,int param_2,int param_3)

{
  short sVar1;
  int local_c;
  
  sVar1 = (short)param_3;
  switch(param_2) {
  case 2:
    *(int *)param_1 = *(int *)param_1 + param_3 * 0xfa;
    break;
  case 3:
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + param_3 * 0xfa;
    break;
  case 4:
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + sVar1 * 0x32;
    break;
  case 5:
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + sVar1 * 0x32;
    break;
  case 6:
    *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + sVar1 * 0x32;
    break;
  case 7:
    *(short *)(param_1 + 0xe) = *(short *)(param_1 + 0xe) + sVar1 * 0x32;
    break;
  case 8:
    *(int *)(param_1 + 0x42) = *(int *)(param_1 + 0x42) + param_3 * 10;
    break;
  case 9:
    for (local_c = 0; local_c < 4; local_c = local_c + 1) {
      *(short *)(param_1 + (local_c + 8) * 2) = *(short *)(param_1 + (local_c + 8) * 2) + sVar1 * 10
      ;
    }
  }
  return;
}
```
