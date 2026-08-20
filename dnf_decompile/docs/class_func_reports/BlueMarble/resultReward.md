# resultReward

`_ZN10BlueMarble12resultRewardEv`

`BlueMarble::resultReward()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7dde` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7dde  _ZN10BlueMarble12resultRewardEv
#           BlueMarble::resultReward()
# range [0x080d7dde, 0x080d7e8d]
080d7dde +0x00:  push   %ebp
080d7ddf +0x01:  mov    %esp,%ebp
080d7de1 +0x03:  sub    $0x68,%esp
080d7de4 +0x06:  lea    -0x49(%ebp),%eax
080d7de7 +0x09:  mov    %eax,(%esp)
080d7dea +0x0c:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
080d7def +0x11:  movl   $0x0,-0xc(%ebp)
080d7df6 +0x18:  jmp    080d7e74 <+0x96>
080d7df8 +0x1a:  mov    -0xc(%ebp),%eax
080d7dfb +0x1d:  mov    0x8(%ebp),%edx
080d7dfe +0x20:  add    $0x4,%edx
080d7e01 +0x23:  mov    %eax,0x4(%esp)
080d7e05 +0x27:  mov    %edx,(%esp)
080d7e08 +0x2a:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7e0d +0x2f:  mov    %eax,(%esp)
080d7e10 +0x32:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d7e15 +0x37:  test   %eax,%eax
080d7e17 +0x39:  sete   %al
080d7e1a +0x3c:  test   %al,%al
080d7e1c +0x3e:  jne    080d7e6c <+0x8e>
080d7e1e +0x40:  lea    -0x49(%ebp),%eax
080d7e21 +0x43:  mov    %eax,(%esp)
080d7e24 +0x46:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
080d7e29 +0x4b:  lea    -0x49(%ebp),%eax
080d7e2c +0x4e:  mov    %eax,0x8(%esp)
080d7e30 +0x52:  mov    -0xc(%ebp),%eax
080d7e33 +0x55:  mov    %eax,0x4(%esp)
080d7e37 +0x59:  mov    0x8(%ebp),%eax
080d7e3a +0x5c:  mov    %eax,(%esp)
080d7e3d +0x5f:  call   080d7e8e <_ZN10BlueMarble13setResultItemEiR10Inven_Item>  ; BlueMarble::setResultItem(int, Inven_Item&)
080d7e42 +0x64:  mov    -0x47(%ebp),%eax
080d7e45 +0x67:  test   %eax,%eax
080d7e47 +0x69:  je     080d7e6f <+0x91>
080d7e49 +0x6b:  movl   $0x42,0xc(%esp)
080d7e51 +0x73:  lea    -0x49(%ebp),%eax
080d7e54 +0x76:  mov    %eax,0x8(%esp)
080d7e58 +0x7a:  mov    -0xc(%ebp),%eax
080d7e5b +0x7d:  mov    %eax,0x4(%esp)
080d7e5f +0x81:  mov    0x8(%ebp),%eax
080d7e62 +0x84:  mov    %eax,(%esp)
080d7e65 +0x87:  call   080d800e <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason>  ; BlueMarble::insertItem(int, Inven_Item&, eItemAddReason)
080d7e6a +0x8c:  jmp    080d7e70 <+0x92>
080d7e6c +0x8e:  nop
080d7e6d +0x8f:  jmp    080d7e70 <+0x92>
080d7e6f +0x91:  nop
080d7e70 +0x92:  addl   $0x1,-0xc(%ebp)
080d7e74 +0x96:  mov    0x8(%ebp),%eax
080d7e77 +0x99:  mov    0x38(%eax),%eax
080d7e7a +0x9c:  mov    0x30(%eax),%eax
080d7e7d +0x9f:  cmp    -0xc(%ebp),%eax
080d7e80 +0xa2:  setg   %al
080d7e83 +0xa5:  test   %al,%al
080d7e85 +0xa7:  jne    080d7df8 <+0x1a>
080d7e8b +0xad:  leave
080d7e8c +0xae:  ret
080d7e8d +0xaf:  nop
```

## 反编译 C

```c
// BlueMarble::resultReward @ 0x80d7dde

/* BlueMarble::resultReward() */

void __thiscall BlueMarble::resultReward(BlueMarble *this)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  uint local_10;
  
  Inven_Item::Inven_Item(local_4d);
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_10);
    iVar1 = BlueMarbleUserInfo::getUser(this_00);
    if (iVar1 != 0) {
      Inven_Item::reset(local_4d);
      setResultItem(this,local_10,local_4d);
      if (local_4b != 0) {
        insertItem(this,local_10,local_4d,0x42);
      }
    }
  }
  return;
}
```
