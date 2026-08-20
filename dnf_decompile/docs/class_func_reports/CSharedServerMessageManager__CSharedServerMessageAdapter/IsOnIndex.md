# IsOnIndex

`_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi`

`CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)`

| 类 | 地址 |
|---|---|
| `CSharedServerMessageManager::CSharedServerMessageAdapter` | `0x08601700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08601700  _ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi
#           CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int)
# range [0x08601700, 0x08601793]
08601700 +0x00:  push   %ebp
08601701 +0x01:  mov    %esp,%ebp
08601703 +0x03:  sub    $0x28,%esp
08601706 +0x06:  mov    0x8(%ebp),%eax
08601709 +0x09:  mov    (%eax),%eax
0860170b +0x0b:  mov    %eax,%edx
0860170d +0x0d:  lea    -0x18(%ebp),%eax
08601710 +0x10:  mov    %edx,0x4(%esp)
08601714 +0x14:  mov    %eax,(%esp)
08601717 +0x17:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
0860171c +0x1c:  sub    $0x4,%esp
0860171f +0x1f:  jmp    0860175d <+0x5d>
08601721 +0x21:  lea    -0x18(%ebp),%eax
08601724 +0x24:  mov    %eax,(%esp)
08601727 +0x27:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
0860172c +0x2c:  mov    (%eax),%eax
0860172e +0x2e:  mov    %eax,-0xc(%ebp)
08601731 +0x31:  mov    -0xc(%ebp),%eax
08601734 +0x34:  cmp    0xc(%ebp),%eax
08601737 +0x37:  jne    08601740 <+0x40>
08601739 +0x39:  mov    $0x1,%eax
0860173e +0x3e:  jmp    08601791 <+0x91>
08601740 +0x40:  lea    -0x10(%ebp),%eax
08601743 +0x43:  movl   $0x0,0x8(%esp)
0860174b +0x4b:  lea    -0x18(%ebp),%edx
0860174e +0x4e:  mov    %edx,0x4(%esp)
08601752 +0x52:  mov    %eax,(%esp)
08601755 +0x55:  call   08341906 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x39d3>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x39d3
0860175a +0x5a:  sub    $0x4,%esp
0860175d +0x5d:  mov    0x8(%ebp),%eax
08601760 +0x60:  mov    (%eax),%eax
08601762 +0x62:  mov    %eax,%edx
08601764 +0x64:  lea    -0x14(%ebp),%eax
08601767 +0x67:  mov    %edx,0x4(%esp)
0860176b +0x6b:  mov    %eax,(%esp)
0860176e +0x6e:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
08601773 +0x73:  sub    $0x4,%esp
08601776 +0x76:  lea    -0x14(%ebp),%eax
08601779 +0x79:  mov    %eax,0x4(%esp)
0860177d +0x7d:  lea    -0x18(%ebp),%eax
08601780 +0x80:  mov    %eax,(%esp)
08601783 +0x83:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
08601788 +0x88:  test   %al,%al
0860178a +0x8a:  jne    08601721 <+0x21>
0860178c +0x8c:  mov    $0x0,%eax
08601791 +0x91:  leave
08601792 +0x92:  ret
08601793 +0x93:  nop
```

## 反编译 C

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex @ 0x8601700

/* CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int) */

undefined4 __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_14 [4];
  int local_10;
  
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_1c);
    local_10 = *piVar2;
    if (local_10 == param_1) break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_14,(int)local_1c);
  }
  return 1;
}
```
