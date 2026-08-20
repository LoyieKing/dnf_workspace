# IncrementBossPickUpItem

`_ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh`

`CBossDungeonEntranceLog::IncrementBossPickUpItem(CUser&, unsigned char, unsigned char)`

| 类 | 地址 |
|---|---|
| `CBossDungeonEntranceLog` | `0x0815678e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0815678e  _ZN23CBossDungeonEntranceLog23IncrementBossPickUpItemER5CUserhh
#           CBossDungeonEntranceLog::IncrementBossPickUpItem(CUser&, unsigned char, unsigned char)
# range [0x0815678e, 0x081568cb]
0815678e +0x000:  push   %ebp
0815678f +0x001:  mov    %esp,%ebp
08156791 +0x003:  sub    $0x78,%esp
08156794 +0x006:  mov    0x10(%ebp),%edx
08156797 +0x009:  mov    0x14(%ebp),%eax
0815679a +0x00c:  mov    %dl,-0x5c(%ebp)
0815679d +0x00f:  mov    %al,-0x60(%ebp)
081567a0 +0x012:  movl   $0x0,-0x40(%ebp)
081567a7 +0x019:  movzbl -0x5c(%ebp),%eax
081567ab +0x01d:  mov    %al,-0x40(%ebp)
081567ae +0x020:  mov    0xc(%ebp),%eax
081567b1 +0x023:  mov    %eax,(%esp)
081567b4 +0x026:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
081567b9 +0x02b:  mov    %al,-0x3f(%ebp)
081567bc +0x02e:  mov    0xc(%ebp),%eax
081567bf +0x031:  mov    %eax,(%esp)
081567c2 +0x034:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
081567c7 +0x039:  mov    %al,-0x3e(%ebp)
081567ca +0x03c:  mov    0xc(%ebp),%eax
081567cd +0x03f:  mov    %eax,(%esp)
081567d0 +0x042:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
081567d5 +0x047:  and    $0xf,%eax
081567d8 +0x04a:  mov    %eax,%edx
081567da +0x04c:  and    $0xf,%edx
081567dd +0x04f:  movzbl -0x3d(%ebp),%eax
081567e1 +0x053:  and    $0xfffffff0,%eax
081567e4 +0x056:  or     %edx,%eax
081567e6 +0x058:  mov    %al,-0x3d(%ebp)
081567e9 +0x05b:  movzbl -0x60(%ebp),%eax
081567ed +0x05f:  and    $0xf,%eax
081567f0 +0x062:  mov    %eax,%edx
081567f2 +0x064:  shl    $0x4,%edx
081567f5 +0x067:  movzbl -0x3d(%ebp),%eax
081567f9 +0x06b:  and    $0xf,%eax
081567fc +0x06e:  or     %edx,%eax
081567fe +0x070:  mov    %al,-0x3d(%ebp)
08156801 +0x073:  mov    0x8(%ebp),%edx
08156804 +0x076:  lea    -0x44(%ebp),%eax
08156807 +0x079:  lea    -0x40(%ebp),%ecx
0815680a +0x07c:  mov    %ecx,0x8(%esp)
0815680e +0x080:  mov    %edx,0x4(%esp)
08156812 +0x084:  mov    %eax,(%esp)
08156815 +0x087:  call   08157464 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xc3>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xc3
0815681a +0x08c:  sub    $0x4,%esp
0815681d +0x08f:  mov    0x8(%ebp),%edx
08156820 +0x092:  lea    -0x3c(%ebp),%eax
08156823 +0x095:  mov    %edx,0x4(%esp)
08156827 +0x099:  mov    %eax,(%esp)
0815682a +0x09c:  call   08157490 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0xef>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0xef
0815682f +0x0a1:  sub    $0x4,%esp
08156832 +0x0a4:  lea    -0x3c(%ebp),%eax
08156835 +0x0a7:  mov    %eax,0x4(%esp)
08156839 +0x0ab:  lea    -0x44(%ebp),%eax
0815683c +0x0ae:  mov    %eax,(%esp)
0815683f +0x0b1:  call   081574b6 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x115>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x115
08156844 +0x0b6:  test   %al,%al
08156846 +0x0b8:  je     081568b6 <+0x128>
08156848 +0x0ba:  movl   $0x10,0x8(%esp)
08156850 +0x0c2:  movl   $0x0,0x4(%esp)
08156858 +0x0ca:  lea    -0x54(%ebp),%eax
0815685b +0x0cd:  mov    %eax,(%esp)
0815685e +0x0d0:  call   0807dcc0 <_init+0x5b8>
08156863 +0x0d5:  movl   $0x1,-0x4c(%ebp)
0815686a +0x0dc:  lea    -0x1c(%ebp),%eax
0815686d +0x0df:  lea    -0x54(%ebp),%edx
08156870 +0x0e2:  mov    %edx,0x8(%esp)
08156874 +0x0e6:  lea    -0x40(%ebp),%edx
08156877 +0x0e9:  mov    %edx,0x4(%esp)
0815687b +0x0ed:  mov    %eax,(%esp)
0815687e +0x0f0:  call   081574ca <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x129>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x129
08156883 +0x0f5:  sub    $0x4,%esp
08156886 +0x0f8:  lea    -0x1c(%ebp),%eax
08156889 +0x0fb:  mov    %eax,0x4(%esp)
0815688d +0x0ff:  lea    -0x30(%ebp),%eax
08156890 +0x102:  mov    %eax,(%esp)
08156893 +0x105:  call   08157508 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x167>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x167
08156898 +0x10a:  mov    0x8(%ebp),%edx
0815689b +0x10d:  lea    -0x38(%ebp),%eax
0815689e +0x110:  lea    -0x30(%ebp),%ecx
081568a1 +0x113:  mov    %ecx,0x8(%esp)
081568a5 +0x117:  mov    %edx,0x4(%esp)
081568a9 +0x11b:  mov    %eax,(%esp)
081568ac +0x11e:  call   0815754a <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1a9>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1a9
081568b1 +0x123:  sub    $0x4,%esp
081568b4 +0x126:  jmp    081568ca <+0x13c>
081568b6 +0x128:  lea    -0x44(%ebp),%eax
081568b9 +0x12b:  mov    %eax,(%esp)
081568bc +0x12e:  call   08157576 <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x1d5>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x1d5
081568c1 +0x133:  mov    0xc(%eax),%edx
081568c4 +0x136:  add    $0x1,%edx
081568c7 +0x139:  mov    %edx,0xc(%eax)
081568ca +0x13c:  leave
081568cb +0x13d:  ret
```

## 反编译 C

```c
// CBossDungeonEntranceLog::IncrementBossPickUpItem @ 0x815678e

/* CBossDungeonEntranceLog::IncrementBossPickUpItem(CUser&, unsigned char, unsigned char) */

void __thiscall
CBossDungeonEntranceLog::IncrementBossPickUpItem
          (CBossDungeonEntranceLog *this,CUser *param_1,uchar param_2,uchar param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined1 local_58 [8];
  undefined4 local_50;
  _Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>> local_48 [4];
  undefined4 local_44;
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  local_40 [4];
  pair local_3c [8];
  pair<unsigned_int_const,STBossDungeonTowerLog> local_34 [20];
  uint local_20 [7];
  
  local_44 = (uint)param_2;
  uVar1 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  local_44._0_2_ = CONCAT11(uVar1,local_44._0_1_);
  uVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_1);
  local_44._0_3_ = CONCAT12(uVar1,(undefined2)local_44);
  uVar1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  local_44 = CONCAT13(uVar1,(undefined3)local_44) & 0xfffffff;
  local_44 = CONCAT13(local_44._3_1_ | param_3 << 4,(undefined3)local_44);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::find((uint *)local_48);
  std::
  map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
  ::end(local_40);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator==
                    (local_48,(_Rb_tree_iterator *)local_40);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>::operator->
                      (local_48);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  else {
    memset(local_58,0,0x10);
    local_50 = 1;
    std::make_pair<unsigned_int&,STBossDungeonTowerLog&>
              (local_20,(STBossDungeonTowerLog *)&local_44);
    std::pair<unsigned_int_const,STBossDungeonTowerLog>::pair<unsigned_int,STBossDungeonTowerLog>
              (local_34,(pair *)local_20);
    std::
    map<unsigned_int,STBossDungeonTowerLog,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STBossDungeonTowerLog>>>
    ::insert(local_3c);
  }
  return;
}
```
