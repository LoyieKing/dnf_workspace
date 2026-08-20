# getDungeonIndex

`_ZNK10BlueMarble15getDungeonIndexEi`

`BlueMarble::getDungeonIndex(int) const`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d73b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d73b6  _ZNK10BlueMarble15getDungeonIndexEi
#           BlueMarble::getDungeonIndex(int) const
# range [0x080d73b6, 0x080d73db]
080d73b6 +0x00:  push   %ebp
080d73b7 +0x01:  mov    %esp,%ebp
080d73b9 +0x03:  sub    $0x18,%esp
080d73bc +0x06:  mov    0xc(%ebp),%eax
080d73bf +0x09:  mov    0x8(%ebp),%edx
080d73c2 +0x0c:  add    $0x4,%edx
080d73c5 +0x0f:  mov    %eax,0x4(%esp)
080d73c9 +0x13:  mov    %edx,(%esp)
080d73cc +0x16:  call   080da504 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x6a1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x6a1
080d73d1 +0x1b:  mov    %eax,(%esp)
080d73d4 +0x1e:  call   080d6c38 <_ZNK18BlueMarbleUserInfo10getDungeonEv>  ; BlueMarbleUserInfo::getDungeon() const
080d73d9 +0x23:  leave
080d73da +0x24:  ret
080d73db +0x25:  nop
```

## 反编译 C

```c
// BlueMarble::getDungeonIndex @ 0x80d73b6

/* BlueMarble::getDungeonIndex(int) const */

void __thiscall BlueMarble::getDungeonIndex(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getDungeon(this_00);
  return;
}
```
