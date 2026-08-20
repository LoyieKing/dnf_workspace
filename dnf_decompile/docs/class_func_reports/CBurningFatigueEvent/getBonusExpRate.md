# getBonusExpRate

`_ZNK20CBurningFatigueEvent15getBonusExpRateEt`

`CBurningFatigueEvent::getBonusExpRate(unsigned short) const`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a0ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a0ec  _ZNK20CBurningFatigueEvent15getBonusExpRateEt
#           CBurningFatigueEvent::getBonusExpRate(unsigned short) const
# range [0x0810a0ec, 0x0810a165]
0810a0ec +0x00:  push   %ebp
0810a0ed +0x01:  mov    %esp,%ebp
0810a0ef +0x03:  sub    $0x38,%esp
0810a0f2 +0x06:  mov    0xc(%ebp),%eax
0810a0f5 +0x09:  mov    %ax,-0x1c(%ebp)
0810a0f9 +0x0d:  movl   $0x1,-0xc(%ebp)
0810a100 +0x14:  jmp    0810a146 <+0x5a>
0810a102 +0x16:  mov    0x8(%ebp),%eax
0810a105 +0x19:  mov    0xc(%eax),%eax
0810a108 +0x1c:  mov    -0xc(%ebp),%edx
0810a10b +0x1f:  mov    %edx,0x4(%esp)
0810a10f +0x23:  mov    %eax,(%esp)
0810a112 +0x26:  call   0810a2a4 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x3f>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x3f
0810a117 +0x2b:  movzwl (%eax),%eax
0810a11a +0x2e:  cmp    -0x1c(%ebp),%ax
0810a11e +0x32:  seta   %al
0810a121 +0x35:  test   %al,%al
0810a123 +0x37:  je     0810a142 <+0x56>
0810a125 +0x39:  mov    -0xc(%ebp),%eax
0810a128 +0x3c:  lea    -0x1(%eax),%edx
0810a12b +0x3f:  mov    0x8(%ebp),%eax
0810a12e +0x42:  mov    0xc(%eax),%eax
0810a131 +0x45:  mov    %edx,0x4(%esp)
0810a135 +0x49:  mov    %eax,(%esp)
0810a138 +0x4c:  call   0810a2a4 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x3f>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x3f
0810a13d +0x51:  mov    0x4(%eax),%eax
0810a140 +0x54:  jmp    0810a163 <+0x77>
0810a142 +0x56:  addl   $0x1,-0xc(%ebp)
0810a146 +0x5a:  mov    0x8(%ebp),%eax
0810a149 +0x5d:  mov    0xc(%eax),%eax
0810a14c +0x60:  mov    %eax,(%esp)
0810a14f +0x63:  call   0810a282 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x1d>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x1d
0810a154 +0x68:  cmp    -0xc(%ebp),%eax
0810a157 +0x6b:  seta   %al
0810a15a +0x6e:  test   %al,%al
0810a15c +0x70:  jne    0810a102 <+0x16>
0810a15e +0x72:  mov    $0x0,%eax
0810a163 +0x77:  leave
0810a164 +0x78:  ret
0810a165 +0x79:  nop
```

## 反编译 C

```c
// CBurningFatigueEvent::getBonusExpRate @ 0x810a0ec

/* CBurningFatigueEvent::getBonusExpRate(unsigned short) const */

undefined4 __thiscall
CBurningFatigueEvent::getBonusExpRate(CBurningFatigueEvent *this,ushort param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  uint local_10;
  
  local_10 = 1;
  while( true ) {
    uVar3 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::size
                      (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                        (this + 0xc));
    if (uVar3 <= local_10) {
      return 0;
    }
    puVar1 = (ushort *)
             std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
             operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **
                         )(this + 0xc),local_10);
    if (param_1 < *puVar1) break;
    local_10 = local_10 + 1;
  }
  iVar2 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::operator[]
                    (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                      (this + 0xc),local_10 - 1);
  return *(undefined4 *)(iVar2 + 4);
}
```
