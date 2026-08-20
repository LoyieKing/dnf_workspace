# find_quest

`_ZN9QuestList10find_questEi`

`QuestList::find_quest(int)`

| 类 | 地址 |
|---|---|
| `QuestList` | `0x08355a5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08355a5c  _ZN9QuestList10find_questEi
#           QuestList::find_quest(int)
# range [0x08355a5c, 0x08355ad7]
08355a5c +0x00:  push   %ebp
08355a5d +0x01:  mov    %esp,%ebp
08355a5f +0x03:  sub    $0x38,%esp
08355a62 +0x06:  lea    -0x18(%ebp),%eax
08355a65 +0x09:  mov    %eax,(%esp)
08355a68 +0x0c:  call   08391d60 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21800>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21800
08355a6d +0x11:  mov    0x8(%ebp),%edx
08355a70 +0x14:  lea    -0x20(%ebp),%eax
08355a73 +0x17:  lea    0xc(%ebp),%ecx
08355a76 +0x1a:  mov    %ecx,0x8(%esp)
08355a7a +0x1e:  mov    %edx,0x4(%esp)
08355a7e +0x22:  mov    %eax,(%esp)
08355a81 +0x25:  call   08391d66 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21806>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21806
08355a86 +0x2a:  sub    $0x4,%esp
08355a89 +0x2d:  mov    -0x20(%ebp),%eax
08355a8c +0x30:  mov    -0x1c(%ebp),%edx
08355a8f +0x33:  mov    %eax,-0x18(%ebp)
08355a92 +0x36:  mov    %edx,-0x14(%ebp)
08355a95 +0x39:  mov    0x8(%ebp),%edx
08355a98 +0x3c:  lea    -0x10(%ebp),%eax
08355a9b +0x3f:  mov    %edx,0x4(%esp)
08355a9f +0x43:  mov    %eax,(%esp)
08355aa2 +0x46:  call   083911d2 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20c72>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20c72
08355aa7 +0x4b:  sub    $0x4,%esp
08355aaa +0x4e:  lea    -0x10(%ebp),%eax
08355aad +0x51:  mov    %eax,0x4(%esp)
08355ab1 +0x55:  lea    -0x18(%ebp),%eax
08355ab4 +0x58:  mov    %eax,(%esp)
08355ab7 +0x5b:  call   083911f8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x20c98>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x20c98
08355abc +0x60:  test   %al,%al
08355abe +0x62:  je     08355ad0 <+0x74>
08355ac0 +0x64:  lea    -0x18(%ebp),%eax
08355ac3 +0x67:  mov    %eax,(%esp)
08355ac6 +0x6a:  call   08391d92 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x21832>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x21832
08355acb +0x6f:  mov    0x4(%eax),%eax
08355ace +0x72:  jmp    08355ad5 <+0x79>
08355ad0 +0x74:  mov    $0x0,%eax
08355ad5 +0x79:  leave
08355ad6 +0x7a:  ret
08355ad7 +0x7b:  nop
```

## 反编译 C

```c
// QuestList::find_quest @ 0x8355a5c

/* QuestList::find_quest(int) */

undefined4 QuestList::find_quest(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  find(&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,Quest*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<Quest*>>::
  end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
          ::operator!=((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,Quest*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,Quest*>>,std::equal_to<int>,std::allocator<Quest*>>
                          *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
