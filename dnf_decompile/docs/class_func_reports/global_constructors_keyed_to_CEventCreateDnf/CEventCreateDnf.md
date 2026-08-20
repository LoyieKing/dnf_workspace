# CEventCreateDnf

`_GLOBAL__I__ZN15CEventCreateDnfC2Ev`

`global constructors keyed to CEventCreateDnf::CEventCreateDnf()`

| 类 | 地址 |
|---|---|
| `global constructors keyed to CEventCreateDnf` | `0x08164890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08164890  _GLOBAL__I__ZN15CEventCreateDnfC2Ev
#           global constructors keyed to CEventCreateDnf::CEventCreateDnf()
# range [0x08164890, 0x0816499b]
08164890 +0x000:  push   %ebp
08164891 +0x001:  mov    %esp,%ebp
08164893 +0x003:  sub    $0x18,%esp
08164896 +0x006:  movl   $0xffff,0x4(%esp)
0816489e +0x00e:  movl   $0x1,(%esp)
081648a5 +0x015:  call   08164850 <_Z41__static_initialization_and_destruction_0ii>  ; __static_initialization_and_destruction_0(int, int)
081648aa +0x01a:  leave
081648ab +0x01b:  ret
081648ac +0x01c:  push   %ebp
081648ad +0x01d:  mov    %esp,%ebp
081648af +0x01f:  sub    $0x18,%esp
081648b2 +0x022:  mov    0x8(%ebp),%eax
081648b5 +0x025:  add    $0x4,%eax
081648b8 +0x028:  mov    %eax,(%esp)
081648bb +0x02b:  call   08ac000c <_ZN20CreateDnfEventSciprtC1Ev>  ; CreateDnfEventSciprt::CreateDnfEventSciprt()
081648c0 +0x030:  mov    0x8(%ebp),%eax
081648c3 +0x033:  mov    %eax,(%esp)
081648c6 +0x036:  call   08164902 <+0x72>
081648cb +0x03b:  mov    0x8(%ebp),%eax
081648ce +0x03e:  mov    %eax,(%esp)
081648d1 +0x041:  call   080e2454 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x1fa>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x1fa
081648d6 +0x046:  mov    0x8(%ebp),%eax
081648d9 +0x049:  movl   $&_ZTV26CreateDnfEventSciprtServer+0x8,(%eax)
081648df +0x04f:  leave
081648e0 +0x050:  ret
081648e1 +0x051:  nop
081648e2 +0x052:  push   %ebp
081648e3 +0x053:  mov    %esp,%ebp
081648e5 +0x055:  sub    $0x18,%esp
081648e8 +0x058:  mov    0x8(%ebp),%eax
081648eb +0x05b:  movl   $&_ZTV26CreateDnfEventSciprtServer+0x8,(%eax)
081648f1 +0x061:  mov    0x8(%ebp),%eax
081648f4 +0x064:  add    $0x4,%eax
081648f7 +0x067:  mov    %eax,(%esp)
081648fa +0x06a:  call   08ac0020 <_ZN20CreateDnfEventSciprtD1Ev>  ; CreateDnfEventSciprt::~CreateDnfEventSciprt()
081648ff +0x06f:  leave
08164900 +0x070:  ret
08164901 +0x071:  nop
08164902 +0x072:  push   %ebp
08164903 +0x073:  mov    %esp,%ebp
08164905 +0x075:  pop    %ebp
08164906 +0x076:  ret
08164907 +0x077:  push   %ebp
08164908 +0x078:  mov    %esp,%ebp
0816490a +0x07a:  push   %edi
0816490b +0x07b:  push   %esi
0816490c +0x07c:  push   %ebx
0816490d +0x07d:  sub    $0x1c,%esp
08164910 +0x080:  mov    $&_ZGVZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,%eax
08164915 +0x085:  movzbl (%eax),%eax
08164918 +0x088:  test   %al,%al
0816491a +0x08a:  jne    0816498d <+0xfd>
0816491c +0x08c:  movl   $&_ZGVZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,(%esp)
08164923 +0x093:  call   08725330 <__cxa_guard_acquire>
08164928 +0x098:  test   %eax,%eax
0816492a +0x09a:  setne  %al
0816492d +0x09d:  test   %al,%al
0816492f +0x09f:  je     0816498d <+0xfd>
08164931 +0x0a1:  mov    $0x0,%ebx
08164936 +0x0a6:  movl   $&_ZZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,(%esp)
0816493d +0x0ad:  call   081648ac <+0x1c>
08164942 +0x0b2:  movl   $&_ZGVZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,(%esp)
08164949 +0x0b9:  call   08725250 <__cxa_guard_release>
0816494e +0x0be:  mov    $&_ZN26CreateDnfEventSciprtServerD1Ev,%eax
08164953 +0x0c3:  movl   $&__dso_handle,0x8(%esp)
0816495b +0x0cb:  movl   $&_ZZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,0x4(%esp)
08164963 +0x0d3:  mov    %eax,(%esp)
08164966 +0x0d6:  call   0807ddd0 <_init+0x6c8>
0816496b +0x0db:  jmp    0816498d <+0xfd>
0816496d +0x0dd:  mov    %edx,%esi
0816496f +0x0df:  mov    %eax,%edi
08164971 +0x0e1:  test   %bl,%bl
08164973 +0x0e3:  jne    08164981 <+0xf1>
08164975 +0x0e5:  movl   $&_ZGVZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,(%esp)
0816497c +0x0ec:  call   087252c0 <__cxa_guard_abort>
08164981 +0x0f1:  mov    %edi,%eax
08164983 +0x0f3:  mov    %esi,%edx
08164985 +0x0f5:  mov    %eax,(%esp)
08164988 +0x0f8:  call   08ae3750 <_Unwind_Resume>
0816498d +0x0fd:  mov    $&_ZZN4ARAD9SingletonI26CreateDnfEventSciprtServerE3GetEvE3obj,%eax
08164992 +0x102:  add    $0x1c,%esp
08164995 +0x105:  pop    %ebx
08164996 +0x106:  pop    %esi
08164997 +0x107:  pop    %edi
08164998 +0x108:  pop    %ebp
08164999 +0x109:  ret
0816499a +0x10a:  nop
0816499b +0x10b:  nop
```

## 反编译 C

```c
// <global>::global @ 0x8164890

/* CEventCreateDnf::CEventCreateDnf() */

void CEventCreateDnf::_GLOBAL__I_CEventCreateDnf(void)

{
  ::__static_initialization_and_destruction_0(1,0xffff);
  return;
}
```
