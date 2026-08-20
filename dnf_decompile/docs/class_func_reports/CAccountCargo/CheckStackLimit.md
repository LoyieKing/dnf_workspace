# CheckStackLimit

`_ZN13CAccountCargo15CheckStackLimitEiii`

`CAccountCargo::CheckStackLimit(int, int, int)`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a670` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a670  _ZN13CAccountCargo15CheckStackLimitEiii
#           CAccountCargo::CheckStackLimit(int, int, int)
# range [0x0828a670, 0x0828a741]
0828a670 +0x00:  push   %ebp
0828a671 +0x01:  mov    %esp,%ebp
0828a673 +0x03:  sub    $0x28,%esp
0828a676 +0x06:  mov    0xc(%ebp),%eax
0828a679 +0x09:  mov    %eax,0x4(%esp)
0828a67d +0x0d:  mov    0x8(%ebp),%eax
0828a680 +0x10:  mov    %eax,(%esp)
0828a683 +0x13:  call   0828a554 <_ZNK13CAccountCargo14CheckValidSlotEi>  ; CAccountCargo::CheckValidSlot(int) const
0828a688 +0x18:  xor    $0x1,%eax
0828a68b +0x1b:  test   %al,%al
0828a68d +0x1d:  je     0828a699 <+0x29>
0828a68f +0x1f:  mov    $0x0,%eax
0828a694 +0x24:  jmp    0828a73f <+0xcf>
0828a699 +0x29:  mov    0xc(%ebp),%edx
0828a69c +0x2c:  mov    0x8(%ebp),%eax
0828a69f +0x2f:  imul   $0x3d,%edx,%edx
0828a6a2 +0x32:  mov    0x6(%edx,%eax,1),%edx
0828a6a6 +0x36:  mov    0x10(%ebp),%eax
0828a6a9 +0x39:  cmp    %eax,%edx
0828a6ab +0x3b:  je     0828a6b7 <+0x47>
0828a6ad +0x3d:  mov    $0x0,%eax
0828a6b2 +0x42:  jmp    0828a73f <+0xcf>
0828a6b7 +0x47:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0828a6bc +0x4c:  mov    0x10(%ebp),%edx
0828a6bf +0x4f:  mov    %edx,0x4(%esp)
0828a6c3 +0x53:  mov    %eax,(%esp)
0828a6c6 +0x56:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0828a6cb +0x5b:  mov    %eax,-0x14(%ebp)
0828a6ce +0x5e:  cmpl   $0x0,-0x14(%ebp)
0828a6d2 +0x62:  jne    0828a6db <+0x6b>
0828a6d4 +0x64:  mov    $0x0,%eax
0828a6d9 +0x69:  jmp    0828a73f <+0xcf>
0828a6db +0x6b:  mov    -0x14(%ebp),%eax
0828a6de +0x6e:  mov    %eax,(%esp)
0828a6e1 +0x71:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
0828a6e6 +0x76:  xor    $0x1,%eax
0828a6e9 +0x79:  test   %al,%al
0828a6eb +0x7b:  je     0828a6f4 <+0x84>
0828a6ed +0x7d:  mov    $0x0,%eax
0828a6f2 +0x82:  jmp    0828a73f <+0xcf>
0828a6f4 +0x84:  mov    -0x14(%ebp),%eax
0828a6f7 +0x87:  mov    %eax,-0x10(%ebp)
0828a6fa +0x8a:  mov    0xc(%ebp),%edx
0828a6fd +0x8d:  mov    0x8(%ebp),%eax
0828a700 +0x90:  imul   $0x3d,%edx,%edx
0828a703 +0x93:  mov    0xb(%edx,%eax,1),%eax
0828a707 +0x97:  add    0x14(%ebp),%eax
0828a70a +0x9a:  mov    %eax,-0xc(%ebp)
0828a70d +0x9d:  mov    -0x10(%ebp),%eax
0828a710 +0xa0:  mov    %eax,(%esp)
0828a713 +0xa3:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
0828a718 +0xa8:  cmp    -0xc(%ebp),%eax
0828a71b +0xab:  jl     0828a723 <+0xb3>
0828a71d +0xad:  cmpl   $0x0,-0xc(%ebp)
0828a721 +0xb1:  jns    0828a72a <+0xba>
0828a723 +0xb3:  mov    $0x1,%eax
0828a728 +0xb8:  jmp    0828a72f <+0xbf>
0828a72a +0xba:  mov    $0x0,%eax
0828a72f +0xbf:  test   %al,%al
0828a731 +0xc1:  je     0828a73a <+0xca>
0828a733 +0xc3:  mov    $0x0,%eax
0828a738 +0xc8:  jmp    0828a73f <+0xcf>
0828a73a +0xca:  mov    $0x1,%eax
0828a73f +0xcf:  leave
0828a740 +0xd0:  ret
0828a741 +0xd1:  nop
```

## 反编译 C

```c
// CAccountCargo::CheckStackLimit @ 0x828a670

/* CAccountCargo::CheckStackLimit(int, int, int) */

undefined4 __thiscall
CAccountCargo::CheckStackLimit(CAccountCargo *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  CItem *this_01;
  int iVar5;
  
  cVar3 = CheckValidSlot(this,param_1);
  if (cVar3 == '\x01') {
    if (*(int *)(this + param_1 * 0x3d + 6) == param_2) {
      this_00 = (CDataManager *)G_CDataManager();
      this_01 = (CItem *)CDataManager::find_item(this_00,param_2);
      if (this_01 == (CItem *)0x0) {
        uVar4 = 0;
      }
      else {
        cVar3 = CItem::is_stackable(this_01);
        if (cVar3 == '\x01') {
          iVar1 = *(int *)(this + param_1 * 0x3d + 0xb);
          iVar5 = CStackableItem::getStackableLimit((CStackableItem *)this_01);
          if ((iVar5 < iVar1 + param_3) || (iVar1 + param_3 < 0)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
