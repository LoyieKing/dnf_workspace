# setLeaveUserBlueMarbleState

`_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv`

`BlueMarble::setLeaveUserBlueMarbleState()`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d8412` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d8412  _ZN10BlueMarble27setLeaveUserBlueMarbleStateEv
#           BlueMarble::setLeaveUserBlueMarbleState()
# range [0x080d8412, 0x080d84b3]
080d8412 +0x00:  push   %ebp
080d8413 +0x01:  mov    %esp,%ebp
080d8415 +0x03:  sub    $0x28,%esp
080d8418 +0x06:  mov    0x8(%ebp),%eax
080d841b +0x09:  mov    %eax,(%esp)
080d841e +0x0c:  call   080d90da <_ZNK10BlueMarble16getWaitUserCountEv>  ; BlueMarble::getWaitUserCount() const
080d8423 +0x11:  test   %eax,%eax
080d8425 +0x13:  sete   %al
080d8428 +0x16:  test   %al,%al
080d842a +0x18:  je     080d8489 <+0x77>
080d842c +0x1a:  movl   $0x0,-0xc(%ebp)
080d8433 +0x21:  jmp    080d8456 <+0x44>
080d8435 +0x23:  mov    -0xc(%ebp),%eax
080d8438 +0x26:  mov    0x8(%ebp),%edx
080d843b +0x29:  add    $0x4,%edx
080d843e +0x2c:  mov    %eax,0x4(%esp)
080d8442 +0x30:  mov    %edx,(%esp)
080d8445 +0x33:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d844a +0x38:  mov    %eax,(%esp)
080d844d +0x3b:  call   080d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>  ; BlueMarbleUserInfo::resetBlueMarbleUserInfo()
080d8452 +0x40:  addl   $0x1,-0xc(%ebp)
080d8456 +0x44:  mov    0x8(%ebp),%eax
080d8459 +0x47:  mov    0x38(%eax),%eax
080d845c +0x4a:  mov    0x30(%eax),%eax
080d845f +0x4d:  cmp    -0xc(%ebp),%eax
080d8462 +0x50:  setg   %al
080d8465 +0x53:  test   %al,%al
080d8467 +0x55:  jne    080d8435 <+0x23>
080d8469 +0x57:  movl   $0x0,0x4(%esp)
080d8471 +0x5f:  mov    0x8(%ebp),%eax
080d8474 +0x62:  mov    %eax,(%esp)
080d8477 +0x65:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d847c +0x6a:  mov    0x8(%ebp),%eax
080d847f +0x6d:  mov    %eax,(%esp)
080d8482 +0x70:  call   080d6d48 <_ZN10BlueMarble15resetBlueMarbleEv>  ; BlueMarble::resetBlueMarble()
080d8487 +0x75:  jmp    080d84b1 <+0x9f>
080d8489 +0x77:  mov    0x8(%ebp),%eax
080d848c +0x7a:  mov    %eax,(%esp)
080d848f +0x7d:  call   080d6dc8 <_ZNK10BlueMarble8getStateEv>  ; BlueMarble::getState() const
080d8494 +0x82:  cmp    $0x1,%eax
080d8497 +0x85:  sete   %al
080d849a +0x88:  test   %al,%al
080d849c +0x8a:  je     080d84b1 <+0x9f>
080d849e +0x8c:  movl   $0x0,0x4(%esp)
080d84a6 +0x94:  mov    0x8(%ebp),%eax
080d84a9 +0x97:  mov    %eax,(%esp)
080d84ac +0x9a:  call   080d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>  ; BlueMarble::changeState(BlueMarbleState::T)
080d84b1 +0x9f:  leave
080d84b2 +0xa0:  ret
080d84b3 +0xa1:  nop
```

## 反编译 C

```c
// BlueMarble::setLeaveUserBlueMarbleState @ 0x80d8412

/* BlueMarble::setLeaveUserBlueMarbleState() */

void __thiscall BlueMarble::setLeaveUserBlueMarbleState(BlueMarble *this)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  uint local_10;
  
  iVar1 = getWaitUserCount(this);
  if (iVar1 == 0) {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      this_00 = (BlueMarbleUserInfo *)
                std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                          ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                           (this + 4),local_10);
      BlueMarbleUserInfo::resetBlueMarbleUserInfo(this_00);
    }
    changeState(this,0);
    resetBlueMarble(this);
  }
  else {
    iVar1 = getState(this);
    if (iVar1 == 1) {
      changeState(this,0);
    }
  }
  return;
}
```
