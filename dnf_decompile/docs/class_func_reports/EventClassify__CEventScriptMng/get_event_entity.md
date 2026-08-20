# get_event_entity

`_ZN13EventClassify15CEventScriptMng16get_event_entityEi`

`EventClassify::CEventScriptMng::get_event_entity(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810b96a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810b96a  _ZN13EventClassify15CEventScriptMng16get_event_entityEi
#           EventClassify::CEventScriptMng::get_event_entity(int)
# range [0x0810b96a, 0x0810b9d3]
0810b96a +0x00:  push   %ebp
0810b96b +0x01:  mov    %esp,%ebp
0810b96d +0x03:  sub    $0x28,%esp
0810b970 +0x06:  mov    0x8(%ebp),%eax
0810b973 +0x09:  lea    0x30(%eax),%ecx
0810b976 +0x0c:  lea    -0x10(%ebp),%eax
0810b979 +0x0f:  lea    0xc(%ebp),%edx
0810b97c +0x12:  mov    %edx,0x8(%esp)
0810b980 +0x16:  mov    %ecx,0x4(%esp)
0810b984 +0x1a:  mov    %eax,(%esp)
0810b987 +0x1d:  call   08111632 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb44>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb44
0810b98c +0x22:  sub    $0x4,%esp
0810b98f +0x25:  mov    0x8(%ebp),%eax
0810b992 +0x28:  lea    0x30(%eax),%edx
0810b995 +0x2b:  lea    -0xc(%ebp),%eax
0810b998 +0x2e:  mov    %edx,0x4(%esp)
0810b99c +0x32:  mov    %eax,(%esp)
0810b99f +0x35:  call   081115cc <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xade>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xade
0810b9a4 +0x3a:  sub    $0x4,%esp
0810b9a7 +0x3d:  lea    -0xc(%ebp),%eax
0810b9aa +0x40:  mov    %eax,0x4(%esp)
0810b9ae +0x44:  lea    -0x10(%ebp),%eax
0810b9b1 +0x47:  mov    %eax,(%esp)
0810b9b4 +0x4a:  call   081115f2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb04>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb04
0810b9b9 +0x4f:  test   %al,%al
0810b9bb +0x51:  je     0810b9cd <+0x63>
0810b9bd +0x53:  lea    -0x10(%ebp),%eax
0810b9c0 +0x56:  mov    %eax,(%esp)
0810b9c3 +0x59:  call   08111606 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0xb18>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0xb18
0810b9c8 +0x5e:  mov    0x4(%eax),%eax
0810b9cb +0x61:  jmp    0810b9d2 <+0x68>
0810b9cd +0x63:  mov    $0x0,%eax
0810b9d2 +0x68:  leave
0810b9d3 +0x69:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::get_event_entity @ 0x810b96a

/* EventClassify::CEventScriptMng::get_event_entity(int) */

undefined4 EventClassify::CEventScriptMng::get_event_entity(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>> local_14 [4];
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  local_10 [12];
  
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::find((int *)local_14);
  std::
  map<int,EventClassify::CEventEntity*,std::less<int>,std::allocator<std::pair<int_const,EventClassify::CEventEntity*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,EventClassify::CEventEntity*>>::operator->
                      (local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}
```
