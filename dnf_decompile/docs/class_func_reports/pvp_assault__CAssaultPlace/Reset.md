# Reset

`_ZN11pvp_assault13CAssaultPlace5ResetEv`

`pvp_assault::CAssaultPlace::Reset()`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082e6ab8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082e6ab8  _ZN11pvp_assault13CAssaultPlace5ResetEv
#           pvp_assault::CAssaultPlace::Reset()
# range [0x082e6ab8, 0x082e6bf5]
082e6ab8 +0x000:  push   %ebp
082e6ab9 +0x001:  mov    %esp,%ebp
082e6abb +0x003:  sub    $0x28,%esp
082e6abe +0x006:  movl   $0x0,-0xc(%ebp)
082e6ac5 +0x00d:  movl   $0x0,-0xc(%ebp)
082e6acc +0x014:  jmp    082e6b1e <+0x66>
082e6ace +0x016:  mov    -0xc(%ebp),%eax
082e6ad1 +0x019:  shl    $0x5,%eax
082e6ad4 +0x01c:  add    0x8(%ebp),%eax
082e6ad7 +0x01f:  mov    %eax,(%esp)
082e6ada +0x022:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6adf +0x027:  test   %eax,%eax
082e6ae1 +0x029:  setne  %al
082e6ae4 +0x02c:  test   %al,%al
082e6ae6 +0x02e:  je     082e6b09 <+0x51>
082e6ae8 +0x030:  mov    -0xc(%ebp),%eax
082e6aeb +0x033:  shl    $0x5,%eax
082e6aee +0x036:  add    0x8(%ebp),%eax
082e6af1 +0x039:  mov    %eax,(%esp)
082e6af4 +0x03c:  call   082f0542 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x2c6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x2c6
082e6af9 +0x041:  movl   $0x0,0x4(%esp)
082e6b01 +0x049:  mov    %eax,(%esp)
082e6b04 +0x04c:  call   082f0a7a <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x7fe>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x7fe
082e6b09 +0x051:  mov    -0xc(%ebp),%eax
082e6b0c +0x054:  shl    $0x5,%eax
082e6b0f +0x057:  add    0x8(%ebp),%eax
082e6b12 +0x05a:  mov    %eax,(%esp)
082e6b15 +0x05d:  call   082f05ba <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x33e>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x33e
082e6b1a +0x062:  addl   $0x1,-0xc(%ebp)
082e6b1e +0x066:  cmpl   $0x7,-0xc(%ebp)
082e6b22 +0x06a:  setle  %al
082e6b25 +0x06d:  test   %al,%al
082e6b27 +0x06f:  jne    082e6ace <+0x16>
082e6b29 +0x071:  mov    0x8(%ebp),%eax
082e6b2c +0x074:  movl   $0x0,0x100(%eax)
082e6b36 +0x07e:  mov    0x8(%ebp),%eax
082e6b39 +0x081:  movl   $0x0,0x104(%eax)
082e6b43 +0x08b:  mov    0x8(%ebp),%eax
082e6b46 +0x08e:  movl   $0x0,0x108(%eax)
082e6b50 +0x098:  mov    0x8(%ebp),%eax
082e6b53 +0x09b:  movl   $0x0,0x10c(%eax)
082e6b5d +0x0a5:  movl   $0x0,0x8(%esp)
082e6b65 +0x0ad:  movl   $0x0,0x4(%esp)
082e6b6d +0x0b5:  lea    -0x14(%ebp),%eax
082e6b70 +0x0b8:  mov    %eax,(%esp)
082e6b73 +0x0bb:  call   082f0470 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1f4>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1f4
082e6b78 +0x0c0:  mov    0x8(%ebp),%ecx
082e6b7b +0x0c3:  mov    -0x14(%ebp),%eax
082e6b7e +0x0c6:  mov    -0x10(%ebp),%edx
082e6b81 +0x0c9:  mov    %eax,0x110(%ecx)
082e6b87 +0x0cf:  mov    %edx,0x114(%ecx)
082e6b8d +0x0d5:  mov    0x8(%ebp),%eax
082e6b90 +0x0d8:  movl   $0x0,0x118(%eax)
082e6b9a +0x0e2:  mov    0x8(%ebp),%eax
082e6b9d +0x0e5:  movl   $0x0,0x11c(%eax)
082e6ba7 +0x0ef:  movl   $0x0,-0xc(%ebp)
082e6bae +0x0f6:  jmp    082e6bc2 <+0x10a>
082e6bb0 +0x0f8:  mov    -0xc(%ebp),%eax
082e6bb3 +0x0fb:  mov    0x8(%ebp),%edx
082e6bb6 +0x0fe:  movb   $0x0,0x120(%edx,%eax,1)
082e6bbe +0x106:  addl   $0x1,-0xc(%ebp)
082e6bc2 +0x10a:  cmpl   $0x1,-0xc(%ebp)
082e6bc6 +0x10e:  setle  %al
082e6bc9 +0x111:  test   %al,%al
082e6bcb +0x113:  jne    082e6bb0 <+0xf8>
082e6bcd +0x115:  mov    0x8(%ebp),%eax
082e6bd0 +0x118:  movl   $0x0,0x124(%eax)
082e6bda +0x122:  mov    0x8(%ebp),%eax
082e6bdd +0x125:  movl   $0x0,0x134(%eax)
082e6be7 +0x12f:  mov    0x8(%ebp),%eax
082e6bea +0x132:  movl   $0x0,0x13c(%eax)
082e6bf4 +0x13c:  leave
082e6bf5 +0x13d:  ret
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::Reset @ 0x82e6ab8

/* pvp_assault::CAssaultPlace::Reset() */

void __thiscall pvp_assault::CAssaultPlace::Reset(CAssaultPlace *this)

{
  int iVar1;
  CUserCharacInfo *this_00;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    iVar1 = CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
    if (iVar1 != 0) {
      this_00 = (CUserCharacInfo *)CAssaulter::GetUser((CAssaulter *)(this + local_10 * 0x20));
      CUserCharacInfo::SetAssaultPlace(this_00,0);
    }
    CAssaulter::Reset((CAssaulter *)(this + local_10 * 0x20));
  }
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  Point2d::Point2d((Point2d *)&local_18,0,0);
  *(undefined4 *)(this + 0x110) = local_18;
  *(undefined4 *)(this + 0x114) = local_14;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    this[local_10 + 0x120] = (CAssaultPlace)0x0;
  }
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  return;
}
```
