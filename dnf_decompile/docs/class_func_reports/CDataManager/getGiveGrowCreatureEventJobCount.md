# getGiveGrowCreatureEventJobCount

`_ZN12CDataManager32getGiveGrowCreatureEventJobCountEi`

`CDataManager::getGiveGrowCreatureEventJobCount(int)`

| 类 | 地址 |
|---|---|
| `CDataManager` | `0x08365a24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08365a24  _ZN12CDataManager32getGiveGrowCreatureEventJobCountEi
#           CDataManager::getGiveGrowCreatureEventJobCount(int)
# range [0x08365a24, 0x08365af9]
08365a24 +0x00:  push   %ebp
08365a25 +0x01:  mov    %esp,%ebp
08365a27 +0x03:  sub    $0x28,%esp
08365a2a +0x06:  mov    0x8(%ebp),%eax
08365a2d +0x09:  add    $0x4c04,%eax
08365a32 +0x0e:  mov    %eax,(%esp)
08365a35 +0x11:  call   08395d6e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x2580e>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x2580e
08365a3a +0x16:  test   %al,%al
08365a3c +0x18:  je     08365a48 <+0x24>
08365a3e +0x1a:  mov    $0x0,%eax
08365a43 +0x1f:  jmp    08365af7 <+0xd3>
08365a48 +0x24:  mov    0x8(%ebp),%eax
08365a4b +0x27:  lea    0x4c04(%eax),%edx
08365a51 +0x2d:  lea    -0x14(%ebp),%eax
08365a54 +0x30:  mov    %edx,0x4(%esp)
08365a58 +0x34:  mov    %eax,(%esp)
08365a5b +0x37:  call   081b749a <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x119>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x119
08365a60 +0x3c:  sub    $0x4,%esp
08365a63 +0x3f:  mov    0x8(%ebp),%eax
08365a66 +0x42:  lea    0x4c04(%eax),%edx
08365a6c +0x48:  lea    -0x18(%ebp),%eax
08365a6f +0x4b:  mov    %edx,0x4(%esp)
08365a73 +0x4f:  mov    %eax,(%esp)
08365a76 +0x52:  call   081b74c0 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x13f>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x13f
08365a7b +0x57:  sub    $0x4,%esp
08365a7e +0x5a:  movl   $0x0,-0xc(%ebp)
08365a85 +0x61:  jmp    08365ade <+0xba>
08365a87 +0x63:  lea    -0x14(%ebp),%eax
08365a8a +0x66:  mov    %eax,(%esp)
08365a8d +0x69:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
08365a92 +0x6e:  mov    0x4(%eax),%eax
08365a95 +0x71:  cmp    0xc(%ebp),%eax
08365a98 +0x74:  jge    08365ab4 <+0x90>
08365a9a +0x76:  lea    -0x14(%ebp),%eax
08365a9d +0x79:  mov    %eax,(%esp)
08365aa0 +0x7c:  call   081b7538 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x1b7>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x1b7
08365aa5 +0x81:  mov    0x8(%eax),%eax
08365aa8 +0x84:  cmp    0xc(%ebp),%eax
08365aab +0x87:  jle    08365ab4 <+0x90>
08365aad +0x89:  mov    $0x1,%eax
08365ab2 +0x8e:  jmp    08365ab9 <+0x95>
08365ab4 +0x90:  mov    $0x0,%eax
08365ab9 +0x95:  test   %al,%al
08365abb +0x97:  je     08365ac1 <+0x9d>
08365abd +0x99:  addl   $0x1,-0xc(%ebp)
08365ac1 +0x9d:  lea    -0x10(%ebp),%eax
08365ac4 +0xa0:  movl   $0x0,0x8(%esp)
08365acc +0xa8:  lea    -0x14(%ebp),%edx
08365acf +0xab:  mov    %edx,0x4(%esp)
08365ad3 +0xaf:  mov    %eax,(%esp)
08365ad6 +0xb2:  call   081b74fa <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x179>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x179
08365adb +0xb7:  sub    $0x4,%esp
08365ade +0xba:  lea    -0x18(%ebp),%eax
08365ae1 +0xbd:  mov    %eax,0x4(%esp)
08365ae5 +0xc1:  lea    -0x14(%ebp),%eax
08365ae8 +0xc4:  mov    %eax,(%esp)
08365aeb +0xc7:  call   081b74e6 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x165>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x165
08365af0 +0xcc:  test   %al,%al
08365af2 +0xce:  jne    08365a87 <+0x63>
08365af4 +0xd0:  mov    -0xc(%ebp),%eax
08365af7 +0xd3:  leave
08365af8 +0xd4:  ret
08365af9 +0xd5:  nop
```

## 反编译 C

```c
// CDataManager::getGiveGrowCreatureEventJobCount @ 0x8365a24

/* CDataManager::getGiveGrowCreatureEventJobCount(int) */

int __thiscall CDataManager::getGiveGrowCreatureEventJobCount(CDataManager *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_1c [4];
  map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>> local_14 [4];
  int local_10;
  
  cVar2 = std::
          map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
          ::empty((map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
                   *)(this + 0x4c04));
  if (cVar2 == '\0') {
    std::
    map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
    ::begin(local_18);
    std::
    map<int,CharacterCreateCreatureGiftScript::eventJob,std::less<int>,std::allocator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>>
    ::end(local_1c);
    local_10 = 0;
    while (cVar2 = std::
                   _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                   ::operator!=((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                 *)local_18,(_Rb_tree_iterator *)local_1c), cVar2 != '\0') {
      iVar3 = std::
              _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                          *)local_18);
      if ((*(int *)(iVar3 + 4) < param_1) &&
         (iVar3 = std::
                  _Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                  ::operator->((_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>
                                *)local_18), param_1 < *(int *)(iVar3 + 8))) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        local_10 = local_10 + 1;
      }
      std::_Rb_tree_iterator<std::pair<int_const,CharacterCreateCreatureGiftScript::eventJob>>::
      operator++(local_14,(int)local_18);
    }
  }
  else {
    local_10 = 0;
  }
  return local_10;
}
```
