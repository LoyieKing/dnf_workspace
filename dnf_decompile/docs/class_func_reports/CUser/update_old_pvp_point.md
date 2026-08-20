# update_old_pvp_point

`_ZN5CUser20update_old_pvp_pointEv`

`CUser::update_old_pvp_point()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865cfac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865cfac  _ZN5CUser20update_old_pvp_pointEv
#           CUser::update_old_pvp_point()
# range [0x0865cfac, 0x0865cfd7]
0865cfac +0x00:  push   %ebp
0865cfad +0x01:  mov    %esp,%ebp
0865cfaf +0x03:  push   %ebx
0865cfb0 +0x04:  sub    $0x14,%esp
0865cfb3 +0x07:  mov    0x8(%ebp),%eax
0865cfb6 +0x0a:  mov    %eax,(%esp)
0865cfb9 +0x0d:  call   084ebec4 <_GLOBAL__I__Z7getUserj+0x2e76>  ; global constructors keyed to getUser(unsigned int)+0x2e76
0865cfbe +0x12:  mov    %eax,%ebx
0865cfc0 +0x14:  mov    0x8(%ebp),%eax
0865cfc3 +0x17:  mov    %eax,(%esp)
0865cfc6 +0x1a:  call   0822f15e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4808>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4808
0865cfcb +0x1f:  mov    0x8(%eax),%eax
0865cfce +0x22:  mov    %eax,0xc(%ebx)
0865cfd1 +0x25:  add    $0x14,%esp
0865cfd4 +0x28:  pop    %ebx
0865cfd5 +0x29:  pop    %ebp
0865cfd6 +0x2a:  ret
0865cfd7 +0x2b:  nop
```

## 反编译 C

```c
// CUser::update_old_pvp_point @ 0x865cfac

/* CUser::update_old_pvp_point() */

void __thiscall CUser::update_old_pvp_point(CUser *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)this);
  iVar2 = CUserCharacInfo::getPVPResultRefR((CUserCharacInfo *)this);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
  return;
}
```
