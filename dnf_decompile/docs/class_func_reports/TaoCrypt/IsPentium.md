# IsPentium

`_ZN8TaoCrypt9IsPentiumEv`

`TaoCrypt::IsPentium()`

| 类 | 地址 |
|---|---|
| `TaoCrypt` | `0x087675f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087675f0  _ZN8TaoCrypt9IsPentiumEv
#           TaoCrypt::IsPentium()
# range [0x087675f0, 0x0876768a]
087675f0 +0x00:  push   %ebp
087675f1 +0x01:  mov    %esp,%ebp
087675f3 +0x03:  sub    $0x48,%esp
087675f6 +0x06:  mov    %ebx,-0xc(%ebp)
087675f9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
087675fe +0x0e:  add    $0xc0559a,%ebx
08767604 +0x14:  mov    %esi,-0x8(%ebp)
08767607 +0x17:  mov    %edi,-0x4(%ebp)
0876760a +0x1a:  call   087675a0 <_ZN8TaoCrypt9HaveCpuIdEv>  ; TaoCrypt::HaveCpuId()
0876760f +0x1f:  test   %al,%al
08767611 +0x21:  jne    08767628 <+0x38>
08767613 +0x23:  mov    -0xc(%ebp),%ebx
08767616 +0x26:  xor    %eax,%eax
08767618 +0x28:  mov    -0x8(%ebp),%esi
0876761b +0x2b:  mov    -0x4(%ebp),%edi
0876761e +0x2e:  mov    %ebp,%esp
08767620 +0x30:  pop    %ebp
08767621 +0x31:  ret
08767622 +0x32:  lea    0x0(%esi),%esi
08767628 +0x38:  lea    -0x28(%ebp),%eax
0876762b +0x3b:  mov    %eax,0x4(%esp)
0876762f +0x3f:  lea    -0x24(%ebp),%esi
08767632 +0x42:  mov    %eax,-0x2c(%ebp)
08767635 +0x45:  lea    -0x667778(%ebx),%edi
0876763b +0x4b:  movl   $0x0,(%esp)
08767642 +0x52:  call   087675c0 <_ZN8TaoCrypt5CpuIdEjPj>  ; TaoCrypt::CpuId(unsigned int, unsigned int*)
08767647 +0x57:  mov    -0x1c(%ebp),%ecx
0876764a +0x5a:  mov    -0x20(%ebp),%edx
0876764d +0x5d:  mov    -0x2c(%ebp),%eax
08767650 +0x60:  mov    %ecx,-0x20(%ebp)
08767653 +0x63:  mov    $0xc,%ecx
08767658 +0x68:  mov    %edx,-0x1c(%ebp)
0876765b +0x6b:  repz cmpsb %es:(%edi),%ds:(%esi)
0876765d +0x6d:  jne    08767613 <+0x23>
0876765f +0x6f:  mov    %eax,0x4(%esp)
08767663 +0x73:  movl   $0x1,(%esp)
0876766a +0x7a:  call   087675c0 <_ZN8TaoCrypt5CpuIdEjPj>  ; TaoCrypt::CpuId(unsigned int, unsigned int*)
0876766f +0x7f:  mov    -0x28(%ebp),%eax
08767672 +0x82:  mov    -0xc(%ebp),%ebx
08767675 +0x85:  mov    -0x8(%ebp),%esi
08767678 +0x88:  mov    -0x4(%ebp),%edi
0876767b +0x8b:  shr    $0x8,%eax
0876767e +0x8e:  and    $0xf,%eax
08767681 +0x91:  cmp    $0x4,%al
08767683 +0x93:  seta   %al
08767686 +0x96:  mov    %ebp,%esp
08767688 +0x98:  pop    %ebp
08767689 +0x99:  ret
0876768a +0x9a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// TaoCrypt::IsPentium @ 0x87675f0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::IsPentium() */

bool TaoCrypt::IsPentium(void)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined4 local_2c;
  char local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  cVar2 = HaveCpuId();
  uVar6 = cVar2 == '\0';
  if (!(bool)uVar6) {
    CpuId(0,&local_2c);
    uVar1 = local_24;
    local_24 = local_20;
    iVar3 = 0xc;
    local_20 = uVar1;
    pcVar4 = local_28;
    pcVar5 = "GenuineIntel";
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      uVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + (uint)bVar7 * -2 + 1;
      pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    } while ((bool)uVar6);
    if ((bool)uVar6) {
      CpuId(1,&local_2c);
      return 4 < (local_2c._1_1_ & 0xf);
    }
  }
  return false;
}
```
