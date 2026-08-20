# getWinner

`_ZNK10BlueMarble9getWinnerEv`

`BlueMarble::getWinner() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7d5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7d5e  _ZNK10BlueMarble9getWinnerEv
#           BlueMarble::getWinner() const
# range [0x080d7d5e, 0x080d7ddd]
080d7d5e +0x00:  push   %ebp
080d7d5f +0x01:  mov    %esp,%ebp
080d7d61 +0x03:  sub    $0x28,%esp
080d7d64 +0x06:  movl   $0x0,-0xc(%ebp)
080d7d6b +0x0d:  jmp    080d7dc3 <+0x65>
080d7d6d +0x0f:  mov    -0xc(%ebp),%eax
080d7d70 +0x12:  mov    0x8(%ebp),%edx
080d7d73 +0x15:  add    $0x4,%edx
080d7d76 +0x18:  mov    %eax,0x4(%esp)
080d7d7a +0x1c:  mov    %edx,(%esp)
080d7d7d +0x1f:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7d82 +0x24:  mov    %eax,(%esp)
080d7d85 +0x27:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d7d8a +0x2c:  test   %eax,%eax
080d7d8c +0x2e:  sete   %al
080d7d8f +0x31:  test   %al,%al
080d7d91 +0x33:  jne    080d7dbe <+0x60>
080d7d93 +0x35:  mov    -0xc(%ebp),%eax
080d7d96 +0x38:  mov    0x8(%ebp),%edx
080d7d99 +0x3b:  add    $0x4,%edx
080d7d9c +0x3e:  mov    %eax,0x4(%esp)
080d7da0 +0x42:  mov    %edx,(%esp)
080d7da3 +0x45:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d7da8 +0x4a:  mov    %eax,(%esp)
080d7dab +0x4d:  call   080d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>  ; BlueMarbleUserInfo::getGrade() const
080d7db0 +0x52:  test   %eax,%eax
080d7db2 +0x54:  sete   %al
080d7db5 +0x57:  test   %al,%al
080d7db7 +0x59:  je     080d7dbf <+0x61>
080d7db9 +0x5b:  mov    -0xc(%ebp),%eax
080d7dbc +0x5e:  jmp    080d7ddb <+0x7d>
080d7dbe +0x60:  nop
080d7dbf +0x61:  addl   $0x1,-0xc(%ebp)
080d7dc3 +0x65:  mov    0x8(%ebp),%eax
080d7dc6 +0x68:  mov    0x38(%eax),%eax
080d7dc9 +0x6b:  mov    0x30(%eax),%eax
080d7dcc +0x6e:  cmp    -0xc(%ebp),%eax
080d7dcf +0x71:  setg   %al
080d7dd2 +0x74:  test   %al,%al
080d7dd4 +0x76:  jne    080d7d6d <+0xf>
080d7dd6 +0x78:  mov    $0xffffffff,%eax
080d7ddb +0x7d:  leave
080d7ddc +0x7e:  ret
080d7ddd +0x7f:  nop
```

## 反编译 C

```c
// BlueMarble::getWinner @ 0x80d7d5e

/* BlueMarble::getWinner() const */

uint __thiscall BlueMarble::getWinner(BlueMarble *this)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  do {
    if (*(int *)(*(int *)(this + 0x38) + 0x30) <= (int)local_10) {
      return 0xffffffff;
    }
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
      iVar2 = BlueMarbleUserInfo::getGrade(pBVar1);
      if (iVar2 == 0) {
        return local_10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}
```
