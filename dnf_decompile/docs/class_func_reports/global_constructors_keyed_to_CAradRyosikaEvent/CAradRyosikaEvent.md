# CAradRyosikaEvent

`_GLOBAL__I__ZN17CAradRyosikaEventC2Ev`

`global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CAradRyosikaEvent` | `0x081a1139` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a1139  _GLOBAL__I__ZN17CAradRyosikaEventC2Ev
#           global constructors keyed to CAradRyosikaEvent::CAradRyosikaEvent()
# range [0x081a1139, 0x081a11c7]
081a1139 +0x00:  push   %ebp
081a113a +0x01:  mov    %esp,%ebp
081a113c +0x03:  sub    $0x18,%esp
081a113f +0x06:  movl   $0xffff,0x4(%esp)
081a1147 +0x0e:  movl   $0x1,(%esp)
081a114e +0x15:  call   081a10f9 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081a1153 +0x1a:  leave
081a1154 +0x1b:  ret
081a1155 +0x1c:  push   %ebp
081a1156 +0x1d:  mov    %esp,%ebp
081a1158 +0x1f:  sub    $0x8,%esp
081a115b +0x22:  call   081a1167 <+0x2e>
081a1160 +0x27:  mov    &_ZN14GlobalInstanceI17Arad_GiftItem_SetE3m_pE,%eax
081a1165 +0x2c:  leave
081a1166 +0x2d:  ret
081a1167 +0x2e:  push   %ebp
081a1168 +0x2f:  mov    %esp,%ebp
081a116a +0x31:  push   %edi
081a116b +0x32:  push   %esi
081a116c +0x33:  push   %ebx
081a116d +0x34:  sub    $0x1c,%esp
081a1170 +0x37:  mov    &_ZN14GlobalInstanceI17Arad_GiftItem_SetE3m_pE,%eax
081a1175 +0x3c:  test   %eax,%eax
081a1177 +0x3e:  jne    081a11bd <+0x84>
081a1179 +0x40:  mov    &_ZN14GlobalInstanceI17Arad_GiftItem_SetE3m_pE,%eax
081a117e +0x45:  test   %eax,%eax
081a1180 +0x47:  jne    081a11be <+0x85>
081a1182 +0x49:  movl   $0x34,(%esp)
081a1189 +0x50:  call   08724450 <_Znwj>  ; operator new(unsigned int)
081a118e +0x55:  mov    %eax,%ebx
081a1190 +0x57:  mov    %ebx,%eax
081a1192 +0x59:  mov    %eax,(%esp)
081a1195 +0x5c:  call   081a2a68 <_ZN17Arad_GiftItem_SetC1Ev>  ; Arad_GiftItem_Set::Arad_GiftItem_Set()
081a119a +0x61:  jmp    081a11b4 <+0x7b>
081a119c +0x63:  mov    %edx,%esi
081a119e +0x65:  mov    %eax,%edi
081a11a0 +0x67:  mov    %ebx,(%esp)
081a11a3 +0x6a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
081a11a8 +0x6f:  mov    %edi,%eax
081a11aa +0x71:  mov    %esi,%edx
081a11ac +0x73:  mov    %eax,(%esp)
081a11af +0x76:  call   08ae3750 <_Unwind_Resume>
081a11b4 +0x7b:  mov    %ebx,%eax
081a11b6 +0x7d:  mov    %eax,&_ZN14GlobalInstanceI17Arad_GiftItem_SetE3m_pE
081a11bb +0x82:  jmp    081a11be <+0x85>
081a11bd +0x84:  nop
081a11be +0x85:  add    $0x1c,%esp
081a11c1 +0x88:  pop    %ebx
081a11c2 +0x89:  pop    %esi
081a11c3 +0x8a:  pop    %edi
081a11c4 +0x8b:  pop    %ebp
081a11c5 +0x8c:  ret
081a11c6 +0x8d:  nop
081a11c7 +0x8e:  nop
```

## 反编译 C

```c
// <global>::global @ 0x81a1139

/* CAradRyosikaEvent::CAradRyosikaEvent() */

void CAradRyosikaEvent::_GLOBAL__I_CAradRyosikaEvent(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
