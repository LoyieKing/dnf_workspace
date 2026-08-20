# getWaitUserCount

`_ZNK10BlueMarble16getWaitUserCountEv`

`BlueMarble::getWaitUserCount() const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d90da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d90da  _ZNK10BlueMarble16getWaitUserCountEv
#           BlueMarble::getWaitUserCount() const
# range [0x080d90da, 0x080d9135]
080d90da +0x00:  push   %ebp
080d90db +0x01:  mov    %esp,%ebp
080d90dd +0x03:  sub    $0x28,%esp
080d90e0 +0x06:  movl   $0x0,-0x10(%ebp)
080d90e7 +0x0d:  movl   $0x0,-0xc(%ebp)
080d90ee +0x14:  jmp    080d911e <+0x44>
080d90f0 +0x16:  mov    -0xc(%ebp),%eax
080d90f3 +0x19:  mov    0x8(%ebp),%edx
080d90f6 +0x1c:  add    $0x4,%edx
080d90f9 +0x1f:  mov    %eax,0x4(%esp)
080d90fd +0x23:  mov    %edx,(%esp)
080d9100 +0x26:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d9105 +0x2b:  mov    %eax,(%esp)
080d9108 +0x2e:  call   080d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>  ; BlueMarbleUserInfo::getUser() const
080d910d +0x33:  test   %eax,%eax
080d910f +0x35:  setne  %al
080d9112 +0x38:  test   %al,%al
080d9114 +0x3a:  je     080d911a <+0x40>
080d9116 +0x3c:  addl   $0x1,-0x10(%ebp)
080d911a +0x40:  addl   $0x1,-0xc(%ebp)
080d911e +0x44:  mov    0x8(%ebp),%eax
080d9121 +0x47:  mov    0x38(%eax),%eax
080d9124 +0x4a:  mov    0x30(%eax),%eax
080d9127 +0x4d:  cmp    -0xc(%ebp),%eax
080d912a +0x50:  setg   %al
080d912d +0x53:  test   %al,%al
080d912f +0x55:  jne    080d90f0 <+0x16>
080d9131 +0x57:  mov    -0x10(%ebp),%eax
080d9134 +0x5a:  leave
080d9135 +0x5b:  ret
```

## 反编译 C

```c
// BlueMarble::getWaitUserCount @ 0x80d90da

/* BlueMarble::getWaitUserCount() const */

int __thiscall BlueMarble::getWaitUserCount(BlueMarble *this)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  int local_14;
  uint local_10;
  
  local_14 = 0;
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_10);
    iVar1 = BlueMarbleUserInfo::getUser(this_00);
    if (iVar1 != 0) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}
```
