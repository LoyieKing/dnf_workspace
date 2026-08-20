# proc_addFatigue

`_ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE`

`StackableAction::Action::proc_addFatigue(StackableAction::input_param&)`

| 类 | 地址 |
|---|---|
| `StackableAction::Action` | `0x0827fbd6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827fbd6  _ZN15StackableAction6Action15proc_addFatigueERNS_11input_paramE
#           StackableAction::Action::proc_addFatigue(StackableAction::input_param&)
# range [0x0827fbd6, 0x0827fcd2]
0827fbd6 +0x00:  push   %ebp
0827fbd7 +0x01:  mov    %esp,%ebp
0827fbd9 +0x03:  sub    $0x38,%esp
0827fbdc +0x06:  mov    0xc(%ebp),%eax
0827fbdf +0x09:  mov    0x8(%eax),%eax
0827fbe2 +0x0c:  test   %eax,%eax
0827fbe4 +0x0e:  jne    0827fbf0 <+0x1a>
0827fbe6 +0x10:  mov    $0x13,%eax
0827fbeb +0x15:  jmp    0827fcd1 <+0xfb>
0827fbf0 +0x1a:  mov    0xc(%ebp),%eax
0827fbf3 +0x1d:  mov    0x8(%eax),%eax
0827fbf6 +0x20:  mov    %eax,-0x10(%ebp)
0827fbf9 +0x23:  mov    0xc(%ebp),%eax
0827fbfc +0x26:  mov    0xc(%eax),%eax
0827fbff +0x29:  test   %eax,%eax
0827fc01 +0x2b:  jne    0827fc0d <+0x37>
0827fc03 +0x2d:  mov    $0x13,%eax
0827fc08 +0x32:  jmp    0827fcd1 <+0xfb>
0827fc0d +0x37:  mov    0xc(%ebp),%eax
0827fc10 +0x3a:  mov    0xc(%eax),%eax
0827fc13 +0x3d:  add    $0x3a0,%eax
0827fc18 +0x42:  mov    %eax,(%esp)
0827fc1b +0x45:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0827fc20 +0x4a:  test   %al,%al
0827fc22 +0x4c:  je     0827fc2e <+0x58>
0827fc24 +0x4e:  mov    $0x4,%eax
0827fc29 +0x53:  jmp    0827fcd1 <+0xfb>
0827fc2e +0x58:  mov    0xc(%ebp),%eax
0827fc31 +0x5b:  mov    0xc(%eax),%eax
0827fc34 +0x5e:  add    $0x3a0,%eax
0827fc39 +0x63:  movl   $0x0,0x4(%esp)
0827fc41 +0x6b:  mov    %eax,(%esp)
0827fc44 +0x6e:  call   08096c72 <_GLOBAL__I_g_maxTotalDefenseRate+0x262>  ; global constructors keyed to g_maxTotalDefenseRate+0x262
0827fc49 +0x73:  movl   $0x0,-0x1c(%ebp)
0827fc50 +0x7a:  mov    %eax,0x4(%esp)
0827fc54 +0x7e:  lea    -0x1c(%ebp),%eax
0827fc57 +0x81:  mov    %eax,(%esp)
0827fc5a +0x84:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0827fc5f +0x89:  mov    (%eax),%eax
0827fc61 +0x8b:  mov    %eax,-0xc(%ebp)
0827fc64 +0x8e:  mov    -0x10(%ebp),%eax
0827fc67 +0x91:  mov    %eax,(%esp)
0827fc6a +0x94:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0827fc6f +0x99:  movzwl %ax,%eax
0827fc72 +0x9c:  cmp    -0xc(%ebp),%eax
0827fc75 +0x9f:  setl   %al
0827fc78 +0xa2:  test   %al,%al
0827fc7a +0xa4:  je     0827fc83 <+0xad>
0827fc7c +0xa6:  mov    $0x5f,%eax
0827fc81 +0xab:  jmp    0827fcd1 <+0xfb>
0827fc83 +0xad:  mov    -0x10(%ebp),%eax
0827fc86 +0xb0:  mov    %eax,(%esp)
0827fc89 +0xb3:  call   0822f2ae <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4958>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4958
0827fc8e +0xb8:  movzwl %ax,%eax
0827fc91 +0xbb:  sub    -0xc(%ebp),%eax
0827fc94 +0xbe:  mov    %eax,-0x18(%ebp)
0827fc97 +0xc1:  movl   $0x0,-0x14(%ebp)
0827fc9e +0xc8:  lea    -0x18(%ebp),%eax
0827fca1 +0xcb:  mov    %eax,0x4(%esp)
0827fca5 +0xcf:  lea    -0x14(%ebp),%eax
0827fca8 +0xd2:  mov    %eax,(%esp)
0827fcab +0xd5:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0827fcb0 +0xda:  mov    (%eax),%edx
0827fcb2 +0xdc:  mov    -0x10(%ebp),%eax
0827fcb5 +0xdf:  mov    %edx,0x4(%esp)
0827fcb9 +0xe3:  mov    %eax,(%esp)
0827fcbc +0xe6:  call   0822f2ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4978>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4978
0827fcc1 +0xeb:  mov    -0x10(%ebp),%eax
0827fcc4 +0xee:  mov    %eax,(%esp)
0827fcc7 +0xf1:  call   08656540 <_ZN5CUser11SendFatigueEv>  ; CUser::SendFatigue()
0827fccc +0xf6:  mov    $0x0,%eax
0827fcd1 +0xfb:  leave
0827fcd2 +0xfc:  ret
```

## 反编译 C

```c
// StackableAction::Action::proc_addFatigue @ 0x827fbd6

/* StackableAction::Action::proc_addFatigue(StackableAction::input_param&) */

undefined4 __thiscall StackableAction::Action::proc_addFatigue(Action *this,input_param *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  int local_20;
  int local_1c [2];
  CUserCharacInfo *local_14;
  int local_10;
  
  if (*(int *)(param_1 + 8) == 0) {
    uVar2 = 0x13;
  }
  else {
    local_14 = *(CUserCharacInfo **)(param_1 + 8);
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 0x13;
    }
    else {
      cVar1 = std::vector<int,std::allocator<int>>::empty();
      if (cVar1 == '\0') {
        piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                                  ((vector<int,std::allocator<int>> *)
                                   (*(int *)(param_1 + 0xc) + 0x3a0),0);
        local_20 = 0;
        piVar3 = std::max<int>(&local_20,piVar3);
        local_10 = *piVar3;
        uVar4 = CUserCharacInfo::getCurCharacFatigue(local_14);
        if ((int)(uVar4 & 0xffff) < local_10) {
          uVar2 = 0x5f;
        }
        else {
          uVar4 = CUserCharacInfo::getCurCharacFatigue(local_14);
          local_1c[0] = (uVar4 & 0xffff) - local_10;
          local_1c[1] = 0;
          piVar3 = std::max<int>(local_1c + 1,local_1c);
          CUserCharacInfo::setCurCharacFatigue(local_14,*piVar3);
          CUser::SendFatigue((CUser *)local_14);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 4;
      }
    }
  }
  return uVar2;
}
```
