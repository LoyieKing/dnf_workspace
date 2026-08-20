# SetSequence

`_ZN8TaoCrypt11SetSequenceEjPh`

`TaoCrypt::SetSequence(unsigned int, unsigned char*)`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x08754570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08754570  _ZN8TaoCrypt11SetSequenceEjPh
#           TaoCrypt::SetSequence(unsigned int, unsigned char*)
# range [0x08754570, 0x087545a9]
08754570 +0x00:  push   %ebp
08754571 +0x01:  mov    %esp,%ebp
08754573 +0x03:  push   %ebx
08754574 +0x04:  sub    $0x14,%esp
08754577 +0x07:  mov    0xc(%ebp),%eax
0875457a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0875457f +0x0f:  add    $0xc18619,%ebx
08754585 +0x15:  movb   $0x30,(%eax)
08754588 +0x18:  add    $0x1,%eax
0875458b +0x1b:  mov    %eax,0x4(%esp)
0875458f +0x1f:  mov    0x8(%ebp),%eax
08754592 +0x22:  mov    %eax,(%esp)
08754595 +0x25:  call   087544e0 <_ZN8TaoCrypt9SetLengthEjPh>  ; TaoCrypt::SetLength(unsigned int, unsigned char*)
0875459a +0x2a:  add    $0x14,%esp
0875459d +0x2d:  pop    %ebx
0875459e +0x2e:  pop    %ebp
0875459f +0x2f:  add    $0x1,%eax
087545a2 +0x32:  ret
087545a3 +0x33:  lea    0x0(%esi),%esi
087545a9 +0x39:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::SetSequence @ 0x8754570

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::SetSequence(unsigned int, unsigned char*) */

int TaoCrypt::SetSequence(uint param_1,uchar *param_2)

{
  int iVar1;
  
  *param_2 = '0';
  iVar1 = SetLength(param_1,param_2 + 1);
  return iVar1 + 1;
}
```
