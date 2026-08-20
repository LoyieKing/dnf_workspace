# getRefillFatigue

`_ZNK20CBurningFatigueEvent16getRefillFatigueEtt`

`CBurningFatigueEvent::getRefillFatigue(unsigned short, unsigned short) const`

| 类 | 地址 |
|---|---|
| `CBurningFatigueEvent` | `0x0810a166` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810a166  _ZNK20CBurningFatigueEvent16getRefillFatigueEtt
#           CBurningFatigueEvent::getRefillFatigue(unsigned short, unsigned short) const
# range [0x0810a166, 0x0810a224]
0810a166 +0x00:  push   %ebp
0810a167 +0x01:  mov    %esp,%ebp
0810a169 +0x03:  push   %ebx
0810a16a +0x04:  sub    $0x34,%esp
0810a16d +0x07:  mov    0xc(%ebp),%edx
0810a170 +0x0a:  mov    0x10(%ebp),%eax
0810a173 +0x0d:  mov    %dx,-0x1c(%ebp)
0810a177 +0x11:  mov    %ax,-0x20(%ebp)
0810a17b +0x15:  movl   $0x1,-0xc(%ebp)
0810a182 +0x1c:  jmp    0810a1fe <+0x98>
0810a184 +0x1e:  mov    0x8(%ebp),%eax
0810a187 +0x21:  mov    0xc(%eax),%eax
0810a18a +0x24:  mov    -0xc(%ebp),%edx
0810a18d +0x27:  mov    %edx,0x4(%esp)
0810a191 +0x2b:  mov    %eax,(%esp)
0810a194 +0x2e:  call   0810a2a4 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x3f>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x3f
0810a199 +0x33:  movzwl (%eax),%eax
0810a19c +0x36:  cmp    -0x1c(%ebp),%ax
0810a1a0 +0x3a:  ja     0810a1d6 <+0x70>
0810a1a2 +0x3c:  mov    0x8(%ebp),%eax
0810a1a5 +0x3f:  mov    0xc(%eax),%eax
0810a1a8 +0x42:  mov    -0xc(%ebp),%edx
0810a1ab +0x45:  mov    %edx,0x4(%esp)
0810a1af +0x49:  mov    %eax,(%esp)
0810a1b2 +0x4c:  call   0810a2a4 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x3f>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x3f
0810a1b7 +0x51:  movzwl (%eax),%eax
0810a1ba +0x54:  movzwl %ax,%eax
0810a1bd +0x57:  movzwl -0x1c(%ebp),%ecx
0810a1c1 +0x5b:  movzwl -0x20(%ebp),%edx
0810a1c5 +0x5f:  mov    %ecx,%ebx
0810a1c7 +0x61:  sub    %edx,%ebx
0810a1c9 +0x63:  mov    %ebx,%edx
0810a1cb +0x65:  cmp    %edx,%eax
0810a1cd +0x67:  jle    0810a1d6 <+0x70>
0810a1cf +0x69:  mov    $0x1,%eax
0810a1d4 +0x6e:  jmp    0810a1db <+0x75>
0810a1d6 +0x70:  mov    $0x0,%eax
0810a1db +0x75:  test   %al,%al
0810a1dd +0x77:  je     0810a1fa <+0x94>
0810a1df +0x79:  mov    0x8(%ebp),%eax
0810a1e2 +0x7c:  mov    0xc(%eax),%eax
0810a1e5 +0x7f:  mov    -0xc(%ebp),%edx
0810a1e8 +0x82:  mov    %edx,0x4(%esp)
0810a1ec +0x86:  mov    %eax,(%esp)
0810a1ef +0x89:  call   0810a2a4 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x3f>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x3f
0810a1f4 +0x8e:  movzwl 0x8(%eax),%eax
0810a1f8 +0x92:  jmp    0810a21f <+0xb9>
0810a1fa +0x94:  addl   $0x1,-0xc(%ebp)
0810a1fe +0x98:  mov    0x8(%ebp),%eax
0810a201 +0x9b:  mov    0xc(%eax),%eax
0810a204 +0x9e:  mov    %eax,(%esp)
0810a207 +0xa1:  call   0810a282 <_GLOBAL__I__ZN20CBurningFatigueEventC2Ev+0x1d>  ; global constructors keyed to CBurningFatigueEvent::CBurningFatigueEvent()+0x1d
0810a20c +0xa6:  cmp    -0xc(%ebp),%eax
0810a20f +0xa9:  seta   %al
0810a212 +0xac:  test   %al,%al
0810a214 +0xae:  jne    0810a184 <+0x1e>
0810a21a +0xb4:  mov    $0x0,%eax
0810a21f +0xb9:  add    $0x34,%esp
0810a222 +0xbc:  pop    %ebx
0810a223 +0xbd:  pop    %ebp
0810a224 +0xbe:  ret
```

## 反编译 C

```c
// CBurningFatigueEvent::getRefillFatigue @ 0x810a166

/* CBurningFatigueEvent::getRefillFatigue(unsigned short, unsigned short) const */

undefined2 __thiscall
CBurningFatigueEvent::getRefillFatigue(CBurningFatigueEvent *this,ushort param_1,ushort param_2)

{
  bool bVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  local_10 = 1;
  while( true ) {
    uVar4 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::size
                      (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                        (this + 0xc));
    if (uVar4 <= local_10) {
      return 0;
    }
    puVar2 = (ushort *)
             std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
             operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **
                         )(this + 0xc),local_10);
    if ((param_1 < *puVar2) ||
       (puVar2 = (ushort *)
                 std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::
                 operator[](*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>
                              **)(this + 0xc),local_10),
       (int)(uint)*puVar2 <= (int)((uint)param_1 - (uint)param_2))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>>::operator[]
                    (*(vector<stBurningFatigueParam_t,std::allocator<stBurningFatigueParam_t>> **)
                      (this + 0xc),local_10);
  return *(undefined2 *)(iVar3 + 8);
}
```
