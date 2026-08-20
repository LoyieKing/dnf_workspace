# intoBoardZone

`_ZN10BlueMarble13intoBoardZoneEi`

`BlueMarble::intoBoardZone(int)`

| 类 | 地址 |
|---|---|
| `BlueMarble` | `0x080d7038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080d7038  _ZN10BlueMarble13intoBoardZoneEi
#           BlueMarble::intoBoardZone(int)
# range [0x080d7038, 0x080d70ad]
080d7038 +0x00:  push   %ebp
080d7039 +0x01:  mov    %esp,%ebp
080d703b +0x03:  sub    $0x18,%esp
080d703e +0x06:  movl   $0xe,0x8(%esp)
080d7046 +0x0e:  mov    0xc(%ebp),%eax
080d7049 +0x11:  mov    %eax,0x4(%esp)
080d704d +0x15:  mov    0x8(%ebp),%eax
080d7050 +0x18:  mov    %eax,(%esp)
080d7053 +0x1b:  call   080d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>  ; BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const
080d7058 +0x20:  mov    %eax,0x8(%esp)
080d705c +0x24:  mov    0xc(%ebp),%eax
080d705f +0x27:  mov    %eax,0x4(%esp)
080d7063 +0x2b:  mov    0x8(%ebp),%eax
080d7066 +0x2e:  mov    %eax,(%esp)
080d7069 +0x31:  call   080d738a <_ZN10BlueMarble15setDungeonIndexEii>  ; BlueMarble::setDungeonIndex(int, int)
080d706e +0x36:  mov    0xc(%ebp),%eax
080d7071 +0x39:  mov    %eax,0x4(%esp)
080d7075 +0x3d:  mov    0x8(%ebp),%eax
080d7078 +0x40:  mov    %eax,(%esp)
080d707b +0x43:  call   080d70ae <_ZN10BlueMarble8tileTypeEi>  ; BlueMarble::tileType(int)
080d7080 +0x48:  mov    0xc(%ebp),%eax
080d7083 +0x4b:  mov    0x8(%ebp),%edx
080d7086 +0x4e:  add    $0x4,%edx
080d7089 +0x51:  mov    %eax,0x4(%esp)
080d708d +0x55:  mov    %edx,(%esp)
080d7090 +0x58:  call   080da4ce <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x66b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x66b
080d7095 +0x5d:  mov    %eax,(%esp)
080d7098 +0x60:  call   080d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>  ; BlueMarbleUserInfo::getBoardZone() const
080d709d +0x65:  mov    %eax,0x4(%esp)
080d70a1 +0x69:  mov    0x8(%ebp),%eax
080d70a4 +0x6c:  mov    %eax,(%esp)
080d70a7 +0x6f:  call   080d7a26 <_ZN10BlueMarble12setVisitZoneEi>  ; BlueMarble::setVisitZone(int)
080d70ac +0x74:  leave
080d70ad +0x75:  ret
```

## 反编译 C

```c
// BlueMarble::intoBoardZone @ 0x80d7038

/* BlueMarble::intoBoardZone(int) */

void __thiscall BlueMarble::intoBoardZone(BlueMarble *this,int param_1)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  
  iVar1 = getRandomDungeon(this,param_1,0xe);
  setDungeonIndex(this,param_1,iVar1);
  tileType(this,param_1);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getBoardZone(this_00);
  setVisitZone((int)this);
  return;
}
```
