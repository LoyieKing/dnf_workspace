# destroy_room

`_ZN8PvP_Room12destroy_roomEi`

`PvP_Room::destroy_room(int)`

| 类 | 地址 |
|---|---|
| `PvP_Room` | `0x085d81d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d81d0  _ZN8PvP_Room12destroy_roomEi
#           PvP_Room::destroy_room(int)
# range [0x085d81d0, 0x085d828f]
085d81d0 +0x00:  push   %ebp
085d81d1 +0x01:  mov    %esp,%ebp
085d81d3 +0x03:  push   %ebx
085d81d4 +0x04:  sub    $0x44,%esp
085d81d7 +0x07:  mov    0x8(%ebp),%eax
085d81da +0x0a:  mov    %eax,(%esp)
085d81dd +0x0d:  call   0822d994 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x303e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x303e
085d81e2 +0x12:  mov    %eax,%ebx
085d81e4 +0x14:  movl   $0x0,0x10(%esp)
085d81ec +0x1c:  movl   $0x0,0xc(%esp)
085d81f4 +0x24:  movl   $0x721,0x8(%esp)
085d81fc +0x2c:  movl   $&_ZZN8PvP_Room12destroy_roomEiE19__PRETTY_FUNCTION__,0x4(%esp)
085d8204 +0x34:  lea    -0x20(%ebp),%eax
085d8207 +0x37:  mov    %eax,(%esp)
085d820a +0x3a:  call   0854fd3c <_ZN10CSwitchLogC1EPKciii>  ; CSwitchLog::CSwitchLog(char const*, int, int, int)
085d820f +0x3f:  mov    0xc(%ebp),%eax
085d8212 +0x42:  mov    %eax,0xc(%esp)
085d8216 +0x46:  mov    %ebx,0x8(%esp)
085d821a +0x4a:  movl   $"pvp@log room(%d), %d",0x4(%esp)
085d8222 +0x52:  lea    -0x20(%ebp),%eax
085d8225 +0x55:  mov    %eax,(%esp)
085d8228 +0x58:  call   0854fd64 <_ZN10CSwitchLogclEPKcz>  ; CSwitchLog::operator()(char const*, ...)
085d822d +0x5d:  mov    0xc(%ebp),%edx
085d8230 +0x60:  mov    0x8(%ebp),%eax
085d8233 +0x63:  add    $0xc,%edx
085d8236 +0x66:  mov    (%eax,%edx,4),%eax
085d8239 +0x69:  mov    %eax,-0x10(%ebp)
085d823c +0x6c:  cmpl   $0x0,-0x10(%ebp)
085d8240 +0x70:  jne    085d827b <+0xab>
085d8242 +0x72:  movl   $0x0,-0xc(%ebp)
085d8249 +0x79:  jmp    085d8270 <+0xa0>
085d824b +0x7b:  mov    -0xc(%ebp),%edx
085d824e +0x7e:  mov    0x8(%ebp),%eax
085d8251 +0x81:  add    $0xc,%edx
085d8254 +0x84:  mov    (%eax,%edx,4),%eax
085d8257 +0x87:  test   %eax,%eax
085d8259 +0x89:  je     085d826c <+0x9c>
085d825b +0x8b:  mov    -0xc(%ebp),%edx
085d825e +0x8e:  mov    0x8(%ebp),%eax
085d8261 +0x91:  add    $0xc,%edx
085d8264 +0x94:  mov    (%eax,%edx,4),%eax
085d8267 +0x97:  mov    %eax,-0x10(%ebp)
085d826a +0x9a:  jmp    085d827b <+0xab>
085d826c +0x9c:  addl   $0x1,-0xc(%ebp)
085d8270 +0xa0:  cmpl   $0x7,-0xc(%ebp)
085d8274 +0xa4:  setle  %al
085d8277 +0xa7:  test   %al,%al
085d8279 +0xa9:  jne    085d824b <+0x7b>
085d827b +0xab:  mov    0x8(%ebp),%eax
085d827e +0xae:  mov    %eax,(%esp)
085d8281 +0xb1:  call   085d62c8 <_ZN8PvP_Room5resetEv>  ; PvP_Room::reset()
085d8286 +0xb6:  mov    -0x10(%ebp),%eax
085d8289 +0xb9:  add    $0x44,%esp
085d828c +0xbc:  pop    %ebx
085d828d +0xbd:  pop    %ebp
085d828e +0xbe:  ret
085d828f +0xbf:  nop
```

## 反编译 C

```c
// PvP_Room::destroy_room @ 0x85d81d0

/* PvP_Room::destroy_room(int) */

int __thiscall PvP_Room::destroy_room(PvP_Room *this,int param_1)

{
  undefined4 uVar1;
  CSwitchLog local_24 [16];
  int local_14;
  int local_10;
  
  uVar1 = get_index(this);
  CSwitchLog::CSwitchLog(local_24,"CUser* PvP_Room::destroy_room(int)",0x721,0,0);
  CSwitchLog::operator()(local_24,"pvp@log room(%d), %d",uVar1,param_1);
  local_14 = *(int *)(this + (param_1 + 0xc) * 4);
  if (local_14 == 0) {
    for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
      if (*(int *)(this + (local_10 + 0xc) * 4) != 0) {
        local_14 = *(int *)(this + (local_10 + 0xc) * 4);
        break;
      }
    }
  }
  reset(this);
  return local_14;
}
```
