# SetItemId

`_ZN13user_creature9CCreature9SetItemIdEi`

`user_creature::CCreature::SetItemId(int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreature` | `0x083375ae` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 083375ae  _ZN13user_creature9CCreature9SetItemIdEi
#           user_creature::CCreature::SetItemId(int)
# range [0x083375ae, 0x0833769b]
083375ae +0x00:  push   %ebp
083375af +0x01:  mov    %esp,%ebp
083375b1 +0x03:  sub    $0x38,%esp
083375b4 +0x06:  mov    0x8(%ebp),%eax
083375b7 +0x09:  mov    0xc(%ebp),%edx
083375ba +0x0c:  mov    %edx,0x4(%esp)
083375be +0x10:  mov    %eax,(%esp)
083375c1 +0x13:  call   0833efb0 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x107d>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x107d
083375c6 +0x18:  mov    0x8(%ebp),%eax
083375c9 +0x1b:  mov    %eax,(%esp)
083375cc +0x1e:  call   0833efa4 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x1071>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x1071
083375d1 +0x23:  mov    %eax,0x4(%esp)
083375d5 +0x27:  mov    0x8(%ebp),%eax
083375d8 +0x2a:  mov    %eax,(%esp)
083375db +0x2d:  call   0833769c <_ZN13user_creature9CCreature13GetCreatureIdEi>  ; user_creature::CCreature::GetCreatureId(int)
083375e0 +0x32:  mov    %eax,-0xc(%ebp)
083375e3 +0x35:  call   08336bd0 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv>  ; user_creature::GetInstanceCreatureScriptMgr()
083375e8 +0x3a:  mov    -0xc(%ebp),%edx
083375eb +0x3d:  mov    %edx,0x4(%esp)
083375ef +0x41:  mov    %eax,(%esp)
083375f2 +0x44:  call   0833d49a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi>  ; user_creature::CCreatureScriptMgr::FindCreatureScript(int)
083375f7 +0x49:  mov    0x8(%ebp),%edx
083375fa +0x4c:  mov    %eax,0x44(%edx)
083375fd +0x4f:  mov    0x8(%ebp),%eax
08337600 +0x52:  mov    0x44(%eax),%eax
08337603 +0x55:  test   %eax,%eax
08337605 +0x57:  jne    0833763f <+0x91>
08337607 +0x59:  movl   $0x5,0xc(%esp)
0833760f +0x61:  movl   $0x56c,0x8(%esp)
08337617 +0x69:  movl   $&_ZZN13user_creature9CCreature9SetItemIdEiE19__PRETTY_FUNCTION__,0x4(%esp)
0833761f +0x71:  lea    -0x1c(%ebp),%eax
08337622 +0x74:  mov    %eax,(%esp)
08337625 +0x77:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0833762a +0x7c:  movl   $"cannot find  creature script memory\n",0x4(%esp)
08337632 +0x84:  lea    -0x1c(%ebp),%eax
08337635 +0x87:  mov    %eax,(%esp)
08337638 +0x8a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0833763d +0x8f:  jmp    08337699 <+0xeb>
0833763f +0x91:  mov    0x8(%ebp),%eax
08337642 +0x94:  mov    0x44(%eax),%eax
08337645 +0x97:  mov    %eax,(%esp)
08337648 +0x9a:  call   0833f320 <_GLOBAL__I__ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x13ed>  ; global constructors keyed to user_creature::GetInstanceCreatureScriptMgr()+0x13ed
0833764d +0x9f:  test   %al,%al
0833764f +0xa1:  je     0833765a <+0xac>
08337651 +0xa3:  mov    0x8(%ebp),%eax
08337654 +0xa6:  movb   $0x0,0x4c(%eax)
08337658 +0xaa:  jmp    08337661 <+0xb3>
0833765a +0xac:  mov    0x8(%ebp),%eax
0833765d +0xaf:  movb   $0x1,0x4c(%eax)
08337661 +0xb3:  mov    0x8(%ebp),%eax
08337664 +0xb6:  movzbl 0x4c(%eax),%eax
08337668 +0xba:  xor    $0x1,%eax
0833766b +0xbd:  test   %al,%al
0833766d +0xbf:  je     08337699 <+0xeb>
0833766f +0xc1:  mov    0x8(%ebp),%eax
08337672 +0xc4:  mov    0x30(%eax),%eax
08337675 +0xc7:  test   %eax,%eax
08337677 +0xc9:  jne    08337699 <+0xeb>
08337679 +0xcb:  mov    0x8(%ebp),%eax
0833767c +0xce:  mov    0x30(%eax),%eax
0833767f +0xd1:  mov    %eax,-0x20(%ebp)
08337682 +0xd4:  movb   $0x5,-0x20(%ebp)
08337686 +0xd8:  mov    -0x20(%ebp),%edx
08337689 +0xdb:  mov    0x8(%ebp),%eax
0833768c +0xde:  mov    %edx,0x30(%eax)
0833768f +0xe1:  movzbl -0x20(%ebp),%edx
08337693 +0xe5:  mov    0x8(%ebp),%eax
08337696 +0xe8:  mov    %dl,0x4d(%eax)
08337699 +0xeb:  leave
0833769a +0xec:  ret
0833769b +0xed:  nop
```

## 反编译 C

```c
// user_creature::CCreature::SetItemId @ 0x83375ae

/* user_creature::CCreature::SetItemId(int) */

void __thiscall user_creature::CCreature::SetItemId(CCreature *this,int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_24;
  cMyTrace local_20 [16];
  undefined4 local_10;
  
  CCreatureItem::SetItemId((CCreatureItem *)this,param_1);
  iVar2 = CCreatureItem::GetItemId((CCreatureItem *)this);
  local_10 = GetCreatureId(this,iVar2);
  iVar2 = GetInstanceCreatureScriptMgr();
  uVar3 = CCreatureScriptMgr::FindCreatureScript(iVar2);
  *(undefined4 *)(this + 0x44) = uVar3;
  if (*(int *)(this + 0x44) == 0) {
    cMyTrace::cMyTrace(local_20,"void user_creature::CCreature::SetItemId(int)",0x56c,5);
    cMyTrace::operator()(local_20,"cannot find  creature script memory\n");
  }
  else {
    cVar1 = CCreatureScript::IsItemGrowCreature(*(CCreatureScript **)(this + 0x44));
    if (cVar1 == '\0') {
      this[0x4c] = (CCreature)0x1;
    }
    else {
      this[0x4c] = (CCreature)0x0;
    }
    if ((this[0x4c] != (CCreature)0x1) && (*(int *)(this + 0x30) == 0)) {
      local_24 = CONCAT31((int3)((uint)*(undefined4 *)(this + 0x30) >> 8),5);
      *(undefined4 *)(this + 0x30) = local_24;
      this[0x4d] = (CCreature)0x5;
    }
  }
  return;
}
```
