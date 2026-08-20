# CalcDurability

`_ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri`

`AvatarRechargeServer::CalcDurability(CUser*, int)`

| 类 | 地址 |
|---|---|
| `AvatarRechargeServer` | `0x0819049a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0819049a  _ZN20AvatarRechargeServer14CalcDurabilityEP5CUseri
#           AvatarRechargeServer::CalcDurability(CUser*, int)
# range [0x0819049a, 0x081905b3]
0819049a +0x000:  push   %ebp
0819049b +0x001:  mov    %esp,%ebp
0819049d +0x003:  push   %esi
0819049e +0x004:  push   %ebx
0819049f +0x005:  sub    $0x30,%esp
081904a2 +0x008:  movl   $0x0,-0x18(%ebp)
081904a9 +0x00f:  jmp    0819059b <+0x101>
081904ae +0x014:  lea    -0x24(%ebp),%eax
081904b1 +0x017:  mov    %eax,(%esp)
081904b4 +0x01a:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
081904b9 +0x01f:  movl   $0xa,0x4(%esp)
081904c1 +0x027:  lea    -0x24(%ebp),%eax
081904c4 +0x02a:  mov    %eax,(%esp)
081904c7 +0x02d:  call   0817ee44 <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x75>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x75
081904cc +0x032:  movl   $0x0,-0x14(%ebp)
081904d3 +0x039:  jmp    081904fe <+0x64>
081904d5 +0x03b:  lea    -0x24(%ebp),%eax
081904d8 +0x03e:  mov    %eax,0xc(%esp)
081904dc +0x042:  mov    -0x14(%ebp),%eax
081904df +0x045:  mov    %eax,0x8(%esp)
081904e3 +0x049:  mov    0xc(%ebp),%eax
081904e6 +0x04c:  mov    %eax,0x4(%esp)
081904ea +0x050:  mov    0x8(%ebp),%eax
081904ed +0x053:  mov    %eax,(%esp)
081904f0 +0x056:  call   081902e8 <_ZN20AvatarRechargeServer20CalcDurabilityDetailEP5CUseriRSt6vectorIiSaIiEE>  ; AvatarRechargeServer::CalcDurabilityDetail(CUser*, int, std::vector<int, std::allocator<int> >&)
081904f5 +0x05b:  xor    $0x1,%eax
081904f8 +0x05e:  test   %al,%al
081904fa +0x060:  addl   $0x1,-0x14(%ebp)
081904fe +0x064:  cmpl   $0x9,-0x14(%ebp)
08190502 +0x068:  setle  %al
08190505 +0x06b:  test   %al,%al
08190507 +0x06d:  jne    081904d5 <+0x3b>
08190509 +0x06f:  lea    -0x24(%ebp),%eax
0819050c +0x072:  mov    %eax,(%esp)
0819050f +0x075:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08190514 +0x07a:  xor    $0x1,%eax
08190517 +0x07d:  test   %al,%al
08190519 +0x07f:  je     0819058c <+0xf2>
0819051b +0x081:  movl   $0x0,-0x10(%ebp)
08190522 +0x088:  lea    -0x24(%ebp),%eax
08190525 +0x08b:  mov    %eax,(%esp)
08190528 +0x08e:  call   0808e1c0 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x30>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x30
0819052d +0x093:  mov    %eax,-0xc(%ebp)
08190530 +0x096:  jmp    08190562 <+0xc8>
08190532 +0x098:  mov    -0x10(%ebp),%eax
08190535 +0x09b:  mov    %eax,0x4(%esp)
08190539 +0x09f:  lea    -0x24(%ebp),%eax
0819053c +0x0a2:  mov    %eax,(%esp)
0819053f +0x0a5:  call   0808e1dc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x4c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x4c
08190544 +0x0aa:  mov    (%eax),%eax
08190546 +0x0ac:  cwtl
08190547 +0x0ad:  mov    %eax,0x8(%esp)
0819054b +0x0b1:  mov    0xc(%ebp),%eax
0819054e +0x0b4:  mov    %eax,0x4(%esp)
08190552 +0x0b8:  movl   $0x2,(%esp)
08190559 +0x0bf:  call   081913f6 <_ZN20AvatarRechargeServer21UpdateAvatarEnduranceEN5CUser11eSendTargetEPS0_s>  ; AvatarRechargeServer::UpdateAvatarEndurance(CUser::eSendTarget, CUser*, short)
0819055e +0x0c4:  addl   $0x1,-0x10(%ebp)
08190562 +0x0c8:  mov    -0x10(%ebp),%eax
08190565 +0x0cb:  cmp    -0xc(%ebp),%eax
08190568 +0x0ce:  setb   %al
0819056b +0x0d1:  test   %al,%al
0819056d +0x0d3:  jne    08190532 <+0x98>
0819056f +0x0d5:  jmp    0819058c <+0xf2>
08190571 +0x0d7:  mov    %edx,%ebx
08190573 +0x0d9:  mov    %eax,%esi
08190575 +0x0db:  lea    -0x24(%ebp),%eax
08190578 +0x0de:  mov    %eax,(%esp)
0819057b +0x0e1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08190580 +0x0e6:  mov    %esi,%eax
08190582 +0x0e8:  mov    %ebx,%edx
08190584 +0x0ea:  mov    %eax,(%esp)
08190587 +0x0ed:  call   08ae3750 <_Unwind_Resume>
0819058c +0x0f2:  lea    -0x24(%ebp),%eax
0819058f +0x0f5:  mov    %eax,(%esp)
08190592 +0x0f8:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08190597 +0x0fd:  addl   $0x1,-0x18(%ebp)
0819059b +0x101:  mov    -0x18(%ebp),%eax
0819059e +0x104:  cmp    0x10(%ebp),%eax
081905a1 +0x107:  setl   %al
081905a4 +0x10a:  test   %al,%al
081905a6 +0x10c:  jne    081904ae <+0x14>
081905ac +0x112:  add    $0x30,%esp
081905af +0x115:  pop    %ebx
081905b0 +0x116:  pop    %esi
081905b1 +0x117:  pop    %ebp
081905b2 +0x118:  ret
081905b3 +0x119:  nop
```

## 反编译 C

```c
// AvatarRechargeServer::CalcDurability @ 0x819049a

/* AvatarRechargeServer::CalcDurability(CUser*, int) */

void __thiscall
AvatarRechargeServer::CalcDurability(AvatarRechargeServer *this,CUser *param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  vector<int,std::allocator<int>> local_28 [12];
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  for (local_1c = 0; local_1c < param_2; local_1c = local_1c + 1) {
    std::vector<int,std::allocator<int>>::vector(local_28);
                    /* try { // try from 081904c7 to 0819055d has its CatchHandler @ 08190571 */
    std::vector<int,std::allocator<int>>::reserve(local_28,10);
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      CalcDurabilityDetail(this,param_1,local_18,(vector *)local_28);
    }
    cVar1 = std::vector<int,std::allocator<int>>::empty();
    if (cVar1 != '\x01') {
      local_14 = 0;
      local_10 = std::vector<int,std::allocator<int>>::size(local_28);
      for (; local_14 < local_10; local_14 = local_14 + 1) {
        puVar2 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_28,local_14);
        UpdateAvatarEndurance(2,param_1,(int)(short)*puVar2);
      }
    }
    std::vector<int,std::allocator<int>>::~vector(local_28);
  }
  return;
}
```
