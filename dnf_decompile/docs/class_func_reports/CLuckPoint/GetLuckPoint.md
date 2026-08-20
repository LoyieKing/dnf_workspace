# GetLuckPoint

`_ZN10CLuckPoint12GetLuckPointEv`

`CLuckPoint::GetLuckPoint()`

| 类 | 地址 |
|---|---|
| `CLuckPoint` | `0x085509da` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085509da  _ZN10CLuckPoint12GetLuckPointEv
#           CLuckPoint::GetLuckPoint()
# range [0x085509da, 0x08550a83]
085509da +0x00:  push   %ebp
085509db +0x01:  mov    %esp,%ebp
085509dd +0x03:  push   %ebx
085509de +0x04:  sub    $0x34,%esp
085509e1 +0x07:  mov    0x8(%ebp),%eax
085509e4 +0x0a:  mov    %eax,(%esp)
085509e7 +0x0d:  call   085510fc <_GLOBAL__I__ZN10CLuckPointC2Ev+0x14f>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0x14f
085509ec +0x12:  xor    $0x1,%eax
085509ef +0x15:  test   %al,%al
085509f1 +0x17:  je     08550a79 <+0x9f>
085509f7 +0x1d:  movl   $0x0,-0x10(%ebp)
085509fe +0x24:  movl   $0x0,-0xc(%ebp)
08550a05 +0x2b:  jmp    08550a47 <+0x6d>
08550a07 +0x2d:  mov    0x8(%ebp),%eax
08550a0a +0x30:  mov    -0xc(%ebp),%edx
08550a0d +0x33:  mov    %edx,0x4(%esp)
08550a11 +0x37:  mov    %eax,(%esp)
08550a14 +0x3a:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550a19 +0x3f:  mov    (%eax),%eax
08550a1b +0x41:  test   %eax,%eax
08550a1d +0x43:  setne  %al
08550a20 +0x46:  test   %al,%al
08550a22 +0x48:  je     08550a43 <+0x69>
08550a24 +0x4a:  mov    0x8(%ebp),%eax
08550a27 +0x4d:  mov    -0xc(%ebp),%edx
08550a2a +0x50:  mov    %edx,0x4(%esp)
08550a2e +0x54:  mov    %eax,(%esp)
08550a31 +0x57:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
08550a36 +0x5c:  mov    (%eax),%eax
08550a38 +0x5e:  mov    %eax,(%esp)
08550a3b +0x61:  call   0822f828 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4ed2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4ed2
08550a40 +0x66:  add    %eax,-0x10(%ebp)
08550a43 +0x69:  addl   $0x1,-0xc(%ebp)
08550a47 +0x6d:  mov    0x8(%ebp),%eax
08550a4a +0x70:  mov    %eax,(%esp)
08550a4d +0x73:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550a52 +0x78:  cmp    -0xc(%ebp),%eax
08550a55 +0x7b:  seta   %al
08550a58 +0x7e:  test   %al,%al
08550a5a +0x80:  jne    08550a07 <+0x2d>
08550a5c +0x82:  mov    -0x10(%ebp),%ebx
08550a5f +0x85:  mov    0x8(%ebp),%eax
08550a62 +0x88:  mov    %eax,(%esp)
08550a65 +0x8b:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08550a6a +0x90:  mov    %eax,-0x1c(%ebp)
08550a6d +0x93:  mov    %ebx,%eax
08550a6f +0x95:  mov    $0x0,%edx
08550a74 +0x9a:  divl   -0x1c(%ebp)
08550a77 +0x9d:  jmp    08550a7e <+0xa4>
08550a79 +0x9f:  mov    $0x0,%eax
08550a7e +0xa4:  add    $0x34,%esp
08550a81 +0xa7:  pop    %ebx
08550a82 +0xa8:  pop    %ebp
08550a83 +0xa9:  ret
```

## 反编译 C

```c
// CLuckPoint::GetLuckPoint @ 0x85509da

/* CLuckPoint::GetLuckPoint() */

uint __thiscall CLuckPoint::GetLuckPoint(CLuckPoint *this)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar1 = std::vector<CUser*,std::allocator<CUser*>>::empty();
  if (cVar1 == '\x01') {
    local_14 = 0;
  }
  else {
    local_14 = 0;
    local_10 = 0;
    while( true ) {
      uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                        ((vector<CUser*,std::allocator<CUser*>> *)this);
      if (uVar5 <= local_10) break;
      piVar2 = (int *)std::vector<CUser*,std::allocator<CUser*>>::operator[]
                                ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
      if (*piVar2 != 0) {
        puVar3 = (undefined4 *)
                 std::vector<CUser*,std::allocator<CUser*>>::operator[]
                           ((vector<CUser*,std::allocator<CUser*>> *)this,local_10);
        iVar4 = CUserCharacInfo::GetCurCharacLuckPoint((CUserCharacInfo *)*puVar3);
        local_14 = local_14 + iVar4;
      }
      local_10 = local_10 + 1;
    }
    uVar5 = std::vector<CUser*,std::allocator<CUser*>>::size
                      ((vector<CUser*,std::allocator<CUser*>> *)this);
    local_14 = local_14 / uVar5;
  }
  return local_14;
}
```
