# GenerateSeed

`_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj`

`TaoCrypt::OS_Seed::GenerateSeed(unsigned char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `TaoCrypt::OS_Seed` | `0x087677d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087677d0  _ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj
#           TaoCrypt::OS_Seed::GenerateSeed(unsigned char*, unsigned int)
# range [0x087677d0, 0x0876783a]
087677d0 +0x00:  push   %ebp
087677d1 +0x01:  mov    %esp,%ebp
087677d3 +0x03:  push   %edi
087677d4 +0x04:  push   %esi
087677d5 +0x05:  push   %ebx
087677d6 +0x06:  sub    $0x1c,%esp
087677d9 +0x09:  mov    0x10(%ebp),%esi
087677dc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087677e1 +0x11:  add    $0xc053b7,%ebx
087677e7 +0x17:  mov    0xc(%ebp),%edi
087677ea +0x1a:  test   %esi,%esi
087677ec +0x1c:  je     0876780c <+0x3c>
087677ee +0x1e:  mov    0x8(%ebp),%edx
087677f1 +0x21:  mov    %esi,0x8(%esp)
087677f5 +0x25:  mov    %edi,0x4(%esp)
087677f9 +0x29:  mov    (%edx),%eax
087677fb +0x2b:  mov    %eax,(%esp)
087677fe +0x2e:  call   0807de60 <_init+0x758>
08767803 +0x33:  cmp    $0xffffffff,%eax
08767806 +0x36:  je     08767828 <+0x58>
08767808 +0x38:  sub    %eax,%esi
0876780a +0x3a:  jne    08767818 <+0x48>
0876780c +0x3c:  add    $0x1c,%esp
0876780f +0x3f:  pop    %ebx
08767810 +0x40:  pop    %esi
08767811 +0x41:  pop    %edi
08767812 +0x42:  pop    %ebp
08767813 +0x43:  ret
08767814 +0x44:  lea    0x0(%esi,%eiz,1),%esi
08767818 +0x48:  add    %eax,%edi
0876781a +0x4a:  movl   $0x1,(%esp)
08767821 +0x51:  call   0807e010 <_init+0x908>
08767826 +0x56:  jmp    087677ee <+0x1e>
08767828 +0x58:  mov    0x8(%ebp),%eax
0876782b +0x5b:  movl   $0x3ec,0x4(%eax)
08767832 +0x62:  add    $0x1c,%esp
08767835 +0x65:  pop    %ebx
08767836 +0x66:  pop    %esi
08767837 +0x67:  pop    %edi
08767838 +0x68:  pop    %ebp
08767839 +0x69:  ret
0876783a +0x6a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::OS_Seed::GenerateSeed @ 0x87677d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::GenerateSeed(unsigned char*, unsigned int) */

void __thiscall TaoCrypt::OS_Seed::GenerateSeed(OS_Seed *this,uchar *param_1,uint param_2)

{
  ssize_t sVar1;
  
  if (param_2 != 0) {
    while( true ) {
      sVar1 = ::read(*(int *)this,param_1,param_2);
      if (sVar1 == -1) {
        *(undefined4 *)(this + 4) = 0x3ec;
        return;
      }
      param_2 = param_2 - sVar1;
      if (param_2 == 0) break;
      param_1 = param_1 + sVar1;
      sleep(1);
    }
  }
  return;
}
```
