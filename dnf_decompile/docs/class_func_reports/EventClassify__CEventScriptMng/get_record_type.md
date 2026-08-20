# get_record_type

`_ZN13EventClassify15CEventScriptMng15get_record_typeEi`

`EventClassify::CEventScriptMng::get_record_type(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c7b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c7b8  _ZN13EventClassify15CEventScriptMng15get_record_typeEi
#           EventClassify::CEventScriptMng::get_record_type(int)
# range [0x0810c7b8, 0x0810c82d]
0810c7b8 +0x00:  push   %ebp
0810c7b9 +0x01:  mov    %esp,%ebp
0810c7bb +0x03:  sub    $0x28,%esp
0810c7be +0x06:  mov    0x8(%ebp),%eax
0810c7c1 +0x09:  lea    0x30(%eax),%ecx
0810c7c4 +0x0c:  lea    -0x10(%ebp),%eax
0810c7c7 +0x0f:  lea    0xc(%ebp),%edx
0810c7ca +0x12:  mov    %edx,0x8(%esp)
0810c7ce +0x16:  mov    %ecx,0x4(%esp)
0810c7d2 +0x1a:  mov    %eax,(%esp)
0810c7d5 +0x1d:  call   08111632 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb44>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb44
0810c7da +0x22:  sub    $0x4,%esp
0810c7dd +0x25:  mov    0x8(%ebp),%eax
0810c7e0 +0x28:  lea    0x30(%eax),%edx
0810c7e3 +0x2b:  lea    -0xc(%ebp),%eax
0810c7e6 +0x2e:  mov    %edx,0x4(%esp)
0810c7ea +0x32:  mov    %eax,(%esp)
0810c7ed +0x35:  call   081115cc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xade>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xade
0810c7f2 +0x3a:  sub    $0x4,%esp
0810c7f5 +0x3d:  lea    -0xc(%ebp),%eax
0810c7f8 +0x40:  mov    %eax,0x4(%esp)
0810c7fc +0x44:  lea    -0x10(%ebp),%eax
0810c7ff +0x47:  mov    %eax,(%esp)
0810c802 +0x4a:  call   081115f2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb04>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb04
0810c807 +0x4f:  test   %al,%al
0810c809 +0x51:  je     0810c827 <+0x6f>
0810c80b +0x53:  lea    -0x10(%ebp),%eax
0810c80e +0x56:  mov    %eax,(%esp)
0810c811 +0x59:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810c816 +0x5e:  mov    0x4(%eax),%eax
0810c819 +0x61:  mov    (%eax),%edx
0810c81b +0x63:  add    $0x14,%edx
0810c81e +0x66:  mov    (%edx),%edx
0810c820 +0x68:  mov    %eax,(%esp)
0810c823 +0x6b:  call   *%edx
0810c825 +0x6d:  jmp    0810c82c <+0x74>
0810c827 +0x6f:  mov    $0x0,%eax
0810c82c +0x74:  leave
0810c82d +0x75:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_record_type @ 0x810c7b8

/* EventClassify::CEventScriptMng::get_record_type(int) */

undefined4 EventClassify::CEventScriptMng::get_record_type(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator *p_Var4;
  undefined1 *puVar5;
  _Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_14 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_10 [12];
  
  puVar5 = &stack0x00000008;
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_10);
  p_Var4 = (_Rb_tree_iterator *)local_10;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                    (local_14,p_Var4);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      (local_14);
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(*(int **)(iVar2 + 4),p_Var4,puVar5);
  }
  return uVar3;
}
```
