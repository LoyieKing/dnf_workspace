# CheckEnterDimensionDungeon

`_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhc`

`CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, char)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859f36a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859f36a  _ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhc
#           CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, char)
# range [0x0859f36a, 0x0859f3fb]
0859f36a +0x00:  push   %ebp
0859f36b +0x01:  mov    %esp,%ebp
0859f36d +0x03:  sub    $0x38,%esp
0859f370 +0x06:  mov    0x14(%ebp),%eax
0859f373 +0x09:  mov    %al,-0x1c(%ebp)
0859f376 +0x0c:  movb   $0x1,-0xd(%ebp)
0859f37a +0x10:  movsbl -0x1c(%ebp),%edx
0859f37e +0x14:  mov    0x8(%ebp),%eax
0859f381 +0x17:  mov    0xcd8(%eax),%eax
0859f387 +0x1d:  movsbl %al,%eax
0859f38a +0x20:  movl   $0xffffffff,0xc(%esp)
0859f392 +0x28:  mov    %edx,0x8(%esp)
0859f396 +0x2c:  mov    %eax,0x4(%esp)
0859f39a +0x30:  lea    -0x10(%ebp),%eax
0859f39d +0x33:  mov    %eax,(%esp)
0859f3a0 +0x36:  call   085beabe <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x1c>  ; global constructors keyed to CParty::cMember::cMember()+0x1c
0859f3a5 +0x3b:  lea    -0x10(%ebp),%eax
0859f3a8 +0x3e:  mov    %eax,0x4(%esp)
0859f3ac +0x42:  mov    0xc(%ebp),%eax
0859f3af +0x45:  mov    %eax,(%esp)
0859f3b2 +0x48:  call   0834d220 <_ZNK8CDungeon26get_dimension_member_countER19DimensionPartyCount>  ; CDungeon::get_dimension_member_count(DimensionPartyCount&) const
0859f3b7 +0x4d:  test   %al,%al
0859f3b9 +0x4f:  je     0859f3d9 <+0x6f>
0859f3bb +0x51:  mov    0x8(%ebp),%eax
0859f3be +0x54:  mov    %eax,(%esp)
0859f3c1 +0x57:  call   0859a16a <_ZN6CParty16get_member_countEv>  ; CParty::get_member_count()
0859f3c6 +0x5c:  mov    %eax,-0xc(%ebp)
0859f3c9 +0x5f:  movzbl -0xe(%ebp),%eax
0859f3cd +0x63:  movsbl %al,%eax
0859f3d0 +0x66:  cmp    -0xc(%ebp),%eax
0859f3d3 +0x69:  jg     0859f3d9 <+0x6f>
0859f3d5 +0x6b:  movb   $0x0,-0xd(%ebp)
0859f3d9 +0x6f:  movzbl -0xd(%ebp),%eax
0859f3dd +0x73:  mov    %eax,0xc(%esp)
0859f3e1 +0x77:  mov    0x10(%ebp),%eax
0859f3e4 +0x7a:  mov    %eax,0x8(%esp)
0859f3e8 +0x7e:  mov    0xc(%ebp),%eax
0859f3eb +0x81:  mov    %eax,0x4(%esp)
0859f3ef +0x85:  mov    0x8(%ebp),%eax
0859f3f2 +0x88:  mov    %eax,(%esp)
0859f3f5 +0x8b:  call   0859f1ce <_ZN6CParty26CheckEnterDimensionDungeonEPK8CDungeonRhb>  ; CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, bool)
0859f3fa +0x90:  leave
0859f3fb +0x91:  ret
```

## 反编译 C

```c
// CParty::CheckEnterDimensionDungeon @ 0x859f36a

/* CParty::CheckEnterDimensionDungeon(CDungeon const*, unsigned char&, char) */

void __thiscall
CParty::CheckEnterDimensionDungeon(CParty *this,CDungeon *param_1,uchar *param_2,char param_3)

{
  char cVar1;
  DimensionPartyCount local_14 [2];
  char local_12;
  bool local_11;
  int local_10;
  
  local_11 = true;
  DimensionPartyCount::DimensionPartyCount(local_14,(char)*(undefined4 *)(this + 0xcd8),param_3,-1);
  cVar1 = CDungeon::get_dimension_member_count(param_1,local_14);
  if (cVar1 != '\0') {
    local_10 = get_member_count(this);
    if (local_12 <= local_10) {
      local_11 = false;
    }
  }
  CheckEnterDimensionDungeon(this,param_1,param_2,local_11);
  return;
}
```
