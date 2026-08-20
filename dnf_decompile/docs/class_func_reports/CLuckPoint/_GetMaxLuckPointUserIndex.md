# _GetMaxLuckPointUserIndex

`_ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv`

`CLuckPoint::_GetMaxLuckPointUserIndex()`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x08550954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08550954  _ZN10CLuckPoint25_GetMaxLuckPointUserIndexEv
#           CLuckPoint::_GetMaxLuckPointUserIndex()
# range [0x08550954, 0x085509d9]
08550954 +0x00:  push   %ebp
08550955 +0x01:  mov    %esp,%ebp
08550957 +0x03:  sub    $0x28,%esp
0855095a +0x06:  movl   $0x0,-0x14(%ebp)
08550961 +0x0d:  movl   $0x0,-0x10(%ebp)
08550968 +0x14:  movl   $0x0,-0xc(%ebp)
0855096f +0x1b:  jmp    085509c0 <+0x6c>
08550971 +0x1d:  mov    0x8(%ebp),%eax
08550974 +0x20:  mov    -0xc(%ebp),%edx
08550977 +0x23:  mov    %edx,0x4(%esp)
0855097b +0x27:  mov    %eax,(%esp)
0855097e +0x2a:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550983 +0x2f:  mov    (%eax),%eax
08550985 +0x31:  mov    %eax,(%esp)
08550988 +0x34:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
0855098d +0x39:  cmp    -0x14(%ebp),%eax
08550990 +0x3c:  setg   %al
08550993 +0x3f:  test   %al,%al
08550995 +0x41:  je     085509bc <+0x68>
08550997 +0x43:  mov    0x8(%ebp),%eax
0855099a +0x46:  mov    -0xc(%ebp),%edx
0855099d +0x49:  mov    %edx,0x4(%esp)
085509a1 +0x4d:  mov    %eax,(%esp)
085509a4 +0x50:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
085509a9 +0x55:  mov    (%eax),%eax
085509ab +0x57:  mov    %eax,(%esp)
085509ae +0x5a:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
085509b3 +0x5f:  mov    %eax,-0x14(%ebp)
085509b6 +0x62:  mov    -0xc(%ebp),%eax
085509b9 +0x65:  mov    %eax,-0x10(%ebp)
085509bc +0x68:  addl   $0x1,-0xc(%ebp)
085509c0 +0x6c:  mov    0x8(%ebp),%eax
085509c3 +0x6f:  mov    %eax,(%esp)
085509c6 +0x72:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
085509cb +0x77:  cmp    -0xc(%ebp),%eax
085509ce +0x7a:  seta   %al
085509d1 +0x7d:  test   %al,%al
085509d3 +0x7f:  jne    08550971 <+0x1d>
085509d5 +0x81:  mov    -0x10(%ebp),%eax
085509d8 +0x84:  leave
085509d9 +0x85:  ret
```

## 反编译 C

```c
// CLuckPoint::_GetMaxLuckPointUserIndex @ 0x8550954

/* CLuckPoint::_GetMaxLuckPointUserIndex() */

uint __thiscall CLuckPoint::_GetMaxLuckPointUserIndex(CLuckPoint *this)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    uVar3 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    if (uVar3 <= local_10) break;
    puVar1 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
    iVar2 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar1);
    if (local_18 < iVar2) {
      puVar1 = (undefined4 *)
               std::vector<CUser*,std::allocator<CUser*>>::operator[]
                         ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
      local_18 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar1);
      local_14 = local_10;
    }
    local_10 = local_10 + 1;
  }
  return local_14;
}
```
