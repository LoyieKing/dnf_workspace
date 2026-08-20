# sendToBlueMarble

`_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard`

`BlueMarble::sendToBlueMarble(PacketGuard&) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d99ce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d99ce  _ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard
#           BlueMarble::sendToBlueMarble(PacketGuard&) const
# range [0x080d99ce, 0x080d9a4b]
080d99ce +0x00:  push   %ebp
080d99cf +0x01:  mov    %esp,%ebp
080d99d1 +0x03:  sub    $0x28,%esp
080d99d4 +0x06:  movl   $0x0,-0xc(%ebp)
080d99db +0x0d:  jmp    080d9a36 <+0x68>
080d99dd +0x0f:  mov    -0xc(%ebp),%eax
080d99e0 +0x12:  mov    0x8(%ebp),%edx
080d99e3 +0x15:  add    $0x4,%edx
080d99e6 +0x18:  mov    %eax,0x4(%esp)
080d99ea +0x1c:  mov    %edx,(%esp)
080d99ed +0x1f:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d99f2 +0x24:  mov    %eax,(%esp)
080d99f5 +0x27:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d99fa +0x2c:  test   %eax,%eax
080d99fc +0x2e:  sete   %al
080d99ff +0x31:  test   %al,%al
080d9a01 +0x33:  jne    080d9a31 <+0x63>
080d9a03 +0x35:  mov    -0xc(%ebp),%eax
080d9a06 +0x38:  mov    0x8(%ebp),%edx
080d9a09 +0x3b:  add    $0x4,%edx
080d9a0c +0x3e:  mov    %eax,0x4(%esp)
080d9a10 +0x42:  mov    %edx,(%esp)
080d9a13 +0x45:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d9a18 +0x4a:  mov    %eax,(%esp)
080d9a1b +0x4d:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d9a20 +0x52:  mov    0xc(%ebp),%edx
080d9a23 +0x55:  mov    %edx,0x4(%esp)
080d9a27 +0x59:  mov    %eax,(%esp)
080d9a2a +0x5c:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
080d9a2f +0x61:  jmp    080d9a32 <+0x64>
080d9a31 +0x63:  nop
080d9a32 +0x64:  addl   $0x1,-0xc(%ebp)
080d9a36 +0x68:  mov    0x8(%ebp),%eax
080d9a39 +0x6b:  mov    0x38(%eax),%eax
080d9a3c +0x6e:  mov    0x30(%eax),%eax
080d9a3f +0x71:  cmp    -0xc(%ebp),%eax
080d9a42 +0x74:  setg   %al
080d9a45 +0x77:  test   %al,%al
080d9a47 +0x79:  jne    080d99dd <+0xf>
080d9a49 +0x7b:  leave
080d9a4a +0x7c:  ret
080d9a4b +0x7d:  nop
```

## 反编译 C

```c
// BlueMarble::sendToBlueMarble @ 0x80d99ce

/* BlueMarble::sendToBlueMarble(PacketGuard&) const */

void __thiscall BlueMarble::sendToBlueMarble(BlueMarble *this,PacketGuard *param_1)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  CUser *this_00;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_10);
    iVar2 = BlueMarbleUserInfo::getUser(pBVar1);
    if (iVar2 != 0) {
      pBVar1 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      this_00 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
      CUser::Send(this_00,param_1);
    }
  }
  return;
}
```
