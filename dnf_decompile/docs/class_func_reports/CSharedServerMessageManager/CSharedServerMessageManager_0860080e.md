# CSharedServerMessageManager

`_ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo`

`CSharedServerMessageManager::CSharedServerMessageManager(stSharedServerMessageInfo*)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager` | `0x0860080e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860080e  _ZN27CSharedServerMessageManagerC1EP25stSharedServerMessageInfo
#           CSharedServerMessageManager::CSharedServerMessageManager(stSharedServerMessageInfo*)
# range [0x0860080e, 0x08600891]
0860080e +0x00:  push   %ebp
0860080f +0x01:  mov    %esp,%ebp
08600811 +0x03:  push   %esi
08600812 +0x04:  push   %ebx
08600813 +0x05:  sub    $0x10,%esp
08600816 +0x08:  mov    0x8(%ebp),%eax
08600819 +0x0b:  mov    %eax,(%esp)
0860081c +0x0e:  call   086019ec <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x38>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x38
08600821 +0x13:  mov    0x8(%ebp),%eax
08600824 +0x16:  add    $0x8,%eax
08600827 +0x19:  mov    %eax,(%esp)
0860082a +0x1c:  call   08601a1a <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x66>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x66
0860082f +0x21:  mov    0x8(%ebp),%eax
08600832 +0x24:  movb   $0x0,0x4(%eax)
08600836 +0x28:  mov    0x8(%ebp),%eax
08600839 +0x2b:  mov    0xc(%ebp),%edx
0860083c +0x2e:  mov    %edx,0x4(%esp)
08600840 +0x32:  mov    %eax,(%esp)
08600843 +0x35:  call   08601a00 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x4c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x4c
08600848 +0x3a:  mov    0x8(%ebp),%eax
0860084b +0x3d:  add    $0x8,%eax
0860084e +0x40:  mov    %eax,(%esp)
08600851 +0x43:  call   086019d0 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x1c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x1c
08600856 +0x48:  jmp    0860088b <+0x7d>
08600858 +0x4a:  mov    %edx,%ebx
0860085a +0x4c:  mov    %eax,%esi
0860085c +0x4e:  mov    0x8(%ebp),%eax
0860085f +0x51:  add    $0x8,%eax
08600862 +0x54:  mov    %eax,(%esp)
08600865 +0x57:  call   08601a30 <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x7c>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x7c
0860086a +0x5c:  mov    %esi,%eax
0860086c +0x5e:  mov    %ebx,%edx
0860086e +0x60:  jmp    08600870 <+0x62>
08600870 +0x62:  mov    %edx,%ebx
08600872 +0x64:  mov    %eax,%esi
08600874 +0x66:  mov    0x8(%ebp),%eax
08600877 +0x69:  mov    %eax,(%esp)
0860087a +0x6c:  call   086019fa <_GLOBAL__I__ZN27CSharedServerMessageManagerC2Ev+0x46>  ; global constructors keyed to CSharedServerMessageManager::CSharedServerMessageManager()+0x46
0860087f +0x71:  mov    %esi,%eax
08600881 +0x73:  mov    %ebx,%edx
08600883 +0x75:  mov    %eax,(%esp)
08600886 +0x78:  call   08ae3750 <_Unwind_Resume>
0860088b +0x7d:  add    $0x10,%esp
0860088e +0x80:  pop    %ebx
0860088f +0x81:  pop    %esi
08600890 +0x82:  pop    %ebp
08600891 +0x83:  ret
```

## 反编译 C

```c
// CSharedServerMessageManager::CSharedServerMessageManager @ 0x860080e

/* CSharedServerMessageManager::CSharedServerMessageManager(stSharedServerMessageInfo*) */

void __thiscall
CSharedServerMessageManager::CSharedServerMessageManager
          (CSharedServerMessageManager *this,stSharedServerMessageInfo *param_1)

{
  CSharedServerMessageAdapter::CSharedServerMessageAdapter((CSharedServerMessageAdapter *)this);
                    /* try { // try from 0860082a to 0860082e has its CatchHandler @ 08600870 */
  EVENT_SERVER_MESSAGE::EVENT_SERVER_MESSAGE((EVENT_SERVER_MESSAGE *)(this + 8));
  this[4] = (CSharedServerMessageManager)0x0;
  CSharedServerMessageAdapter::SetServerMessageAddInfo((CSharedServerMessageAdapter *)this,param_1);
                    /* try { // try from 08600851 to 08600855 has its CatchHandler @ 08600858 */
  EVENT_SERVER_MESSAGE::clear((EVENT_SERVER_MESSAGE *)(this + 8));
  return;
}
```
