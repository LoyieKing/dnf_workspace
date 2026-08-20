# COnTimeEvent

`_ZN12COnTimeEventC1Ev`

`COnTimeEvent::COnTimeEvent()`

| 类 | 地址 |
|---|---|
| `COnTimeEvent` | `0x081bb826` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081bb826  _ZN12COnTimeEventC1Ev
#           COnTimeEvent::COnTimeEvent()
# range [0x081bb826, 0x081bb8ad]
081bb826 +0x00:  push   %ebp
081bb827 +0x01:  mov    %esp,%ebp
081bb829 +0x03:  push   %esi
081bb82a +0x04:  push   %ebx
081bb82b +0x05:  sub    $0x10,%esp
081bb82e +0x08:  mov    0x8(%ebp),%eax
081bb831 +0x0b:  mov    %eax,(%esp)
081bb834 +0x0e:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
081bb839 +0x13:  mov    0x8(%ebp),%eax
081bb83c +0x16:  movl   $&_ZTV12COnTimeEvent+0x8,(%eax)
081bb842 +0x1c:  mov    0x8(%ebp),%eax
081bb845 +0x1f:  add    $0x14,%eax
081bb848 +0x22:  mov    %eax,(%esp)
081bb84b +0x25:  call   081bbfb6 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x50>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x50
081bb850 +0x2a:  mov    0x8(%ebp),%eax
081bb853 +0x2d:  movl   $0x0,0xc(%eax)
081bb85a +0x34:  mov    0x8(%ebp),%eax
081bb85d +0x37:  movl   $0x1,0x10(%eax)
081bb864 +0x3e:  mov    0x8(%ebp),%eax
081bb867 +0x41:  add    $0x14,%eax
081bb86a +0x44:  mov    %eax,(%esp)
081bb86d +0x47:  call   081bc042 <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0xdc>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0xdc
081bb872 +0x4c:  jmp    081bb8a7 <+0x81>
081bb874 +0x4e:  mov    %edx,%ebx
081bb876 +0x50:  mov    %eax,%esi
081bb878 +0x52:  mov    0x8(%ebp),%eax
081bb87b +0x55:  add    $0x14,%eax
081bb87e +0x58:  mov    %eax,(%esp)
081bb881 +0x5b:  call   081bbffc <_GLOBAL__I__ZN15CRewardUserList6insertEjii+0x96>  ; global constructors keyed to CRewardUserList::insert(unsigned int, int, int)+0x96
081bb886 +0x60:  mov    %esi,%eax
081bb888 +0x62:  mov    %ebx,%edx
081bb88a +0x64:  jmp    081bb88c <+0x66>
081bb88c +0x66:  mov    %edx,%ebx
081bb88e +0x68:  mov    %eax,%esi
081bb890 +0x6a:  mov    0x8(%ebp),%eax
081bb893 +0x6d:  mov    %eax,(%esp)
081bb896 +0x70:  call   0810ae52 <_ZN10CEventBaseD1Ev>  ; CEventBase::~CEventBase()
081bb89b +0x75:  mov    %esi,%eax
081bb89d +0x77:  mov    %ebx,%edx
081bb89f +0x79:  mov    %eax,(%esp)
081bb8a2 +0x7c:  call   08ae3750 <_Unwind_Resume>
081bb8a7 +0x81:  add    $0x10,%esp
081bb8aa +0x84:  pop    %ebx
081bb8ab +0x85:  pop    %esi
081bb8ac +0x86:  pop    %ebp
081bb8ad +0x87:  ret
```

## 反编译 C

```c
// COnTimeEvent::COnTimeEvent @ 0x81bb826

/* COnTimeEvent::COnTimeEvent() */

void __thiscall COnTimeEvent::COnTimeEvent(COnTimeEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__COnTimeEvent_08bc07c8;
                    /* try { // try from 081bb84b to 081bb84f has its CatchHandler @ 081bb88c */
  CRewardUserList::CRewardUserList((CRewardUserList *)(this + 0x14));
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 1;
                    /* try { // try from 081bb86d to 081bb871 has its CatchHandler @ 081bb874 */
  CRewardUserList::clear((CRewardUserList *)(this + 0x14));
  return;
}
```
