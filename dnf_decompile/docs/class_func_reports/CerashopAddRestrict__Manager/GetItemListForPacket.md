# GetItemListForPacket

`_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE`

`CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int, std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&)`

| 类 | 地址 |
|---|---|
| `CerashopAddRestrict::Manager` | `0x080e0e68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080e0e68  _ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE
#           CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int, std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int const, CerashopAddRestrict::paramDaily*> > >&)
# range [0x080e0e68, 0x080e0f39]
080e0e68 +0x00:  push   %ebp
080e0e69 +0x01:  mov    %esp,%ebp
080e0e6b +0x03:  push   %ebx
080e0e6c +0x04:  sub    $0x24,%esp
080e0e6f +0x07:  lea    -0x14(%ebp),%eax
080e0e72 +0x0a:  mov    0x10(%ebp),%edx
080e0e75 +0x0d:  mov    %edx,0x4(%esp)
080e0e79 +0x11:  mov    %eax,(%esp)
080e0e7c +0x14:  call   080e27f4 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x59a>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x59a
080e0e81 +0x19:  sub    $0x4,%esp
080e0e84 +0x1c:  lea    -0x18(%ebp),%eax
080e0e87 +0x1f:  mov    0x10(%ebp),%edx
080e0e8a +0x22:  mov    %edx,0x4(%esp)
080e0e8e +0x26:  mov    %eax,(%esp)
080e0e91 +0x29:  call   080e26f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x498>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x498
080e0e96 +0x2e:  sub    $0x4,%esp
080e0e99 +0x31:  jmp    080e0f1a <+0xb2>
080e0e9b +0x33:  lea    -0x14(%ebp),%eax
080e0e9e +0x36:  mov    %eax,(%esp)
080e0ea1 +0x39:  call   080e272c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4d2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4d2
080e0ea6 +0x3e:  mov    (%eax),%eax
080e0ea8 +0x40:  mov    0x8(%ebp),%edx
080e0eab +0x43:  add    $0x4,%edx
080e0eae +0x46:  mov    %eax,0x4(%esp)
080e0eb2 +0x4a:  mov    %edx,(%esp)
080e0eb5 +0x4d:  call   08abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>  ; CerashopAddRestrict::ScriptLoader::GetRestrictInfo(unsigned int)
080e0eba +0x52:  mov    %eax,-0xc(%ebp)
080e0ebd +0x55:  cmpl   $0x0,-0xc(%ebp)
080e0ec1 +0x59:  je     080e0efd <+0x95>
080e0ec3 +0x5b:  mov    -0xc(%ebp),%eax
080e0ec6 +0x5e:  mov    0x8(%eax),%ebx
080e0ec9 +0x61:  lea    -0x14(%ebp),%eax
080e0ecc +0x64:  mov    %eax,(%esp)
080e0ecf +0x67:  call   080e272c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4d2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4d2
080e0ed4 +0x6c:  mov    0x4(%eax),%eax
080e0ed7 +0x6f:  mov    0x4(%eax),%eax
080e0eda +0x72:  cmp    %eax,%ebx
080e0edc +0x74:  setbe  %al
080e0edf +0x77:  test   %al,%al
080e0ee1 +0x79:  je     080e0efd <+0x95>
080e0ee3 +0x7b:  lea    -0x14(%ebp),%eax
080e0ee6 +0x7e:  mov    %eax,(%esp)
080e0ee9 +0x81:  call   080e272c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4d2>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4d2
080e0eee +0x86:  mov    %eax,0x4(%esp)
080e0ef2 +0x8a:  mov    0xc(%ebp),%eax
080e0ef5 +0x8d:  mov    %eax,(%esp)
080e0ef8 +0x90:  call   080e24f0 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x296>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x296
080e0efd +0x95:  lea    -0x10(%ebp),%eax
080e0f00 +0x98:  movl   $0x0,0x8(%esp)
080e0f08 +0xa0:  lea    -0x14(%ebp),%edx
080e0f0b +0xa3:  mov    %edx,0x4(%esp)
080e0f0f +0xa7:  mov    %eax,(%esp)
080e0f12 +0xaa:  call   080e281a <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x5c0>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x5c0
080e0f17 +0xaf:  sub    $0x4,%esp
080e0f1a +0xb2:  lea    -0x18(%ebp),%eax
080e0f1d +0xb5:  mov    %eax,0x4(%esp)
080e0f21 +0xb9:  lea    -0x14(%ebp),%eax
080e0f24 +0xbc:  mov    %eax,(%esp)
080e0f27 +0xbf:  call   080e2718 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x4be>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x4be
080e0f2c +0xc4:  test   %al,%al
080e0f2e +0xc6:  jne    080e0e9b <+0x33>
080e0f34 +0xcc:  mov    -0x4(%ebp),%ebx
080e0f37 +0xcf:  leave
080e0f38 +0xd0:  ret
080e0f39 +0xd1:  nop
```

## 反编译 C

```c
// CerashopAddRestrict::Manager::GetItemListForPacket @ 0x80e0e68

/* CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int,
   std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   CerashopAddRestrict::paramDaily*> > >&) */

void CerashopAddRestrict::Manager::GetItemListForPacket(vector *param_1,map *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_1c [4];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_14 [4];
  int local_10;
  
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::begin(local_18);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_1c);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                        *)local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
    operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> *)
               local_18);
    local_10 = ScriptLoader::GetRestrictInfo((uint)(param_1 + 4));
    if (local_10 != 0) {
      uVar1 = *(uint *)(local_10 + 8);
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
              ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                            *)local_18);
      if (uVar1 <= *(uint *)(*(int *)(iVar3 + 4) + 4)) {
        puVar4 = (uint *)std::
                         _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                         ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                                       *)local_18);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_2,puVar4);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
    operator++(local_14,(int)local_18);
  }
  return;
}
```
