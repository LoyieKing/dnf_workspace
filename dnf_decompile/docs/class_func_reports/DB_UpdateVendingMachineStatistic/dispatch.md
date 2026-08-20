# dispatch

`_ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream`

`DB_UpdateVendingMachineStatistic::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateVendingMachineStatistic` | `0x08434718` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08434718  _ZN32DB_UpdateVendingMachineStatistic8dispatchEiiP6Stream
#           DB_UpdateVendingMachineStatistic::dispatch(int, int, Stream*)
# range [0x08434718, 0x08434877]
08434718 +0x000:  push   %ebp
08434719 +0x001:  mov    %esp,%ebp
0843471b +0x003:  push   %esi
0843471c +0x004:  push   %ebx
0843471d +0x005:  sub    $0x40,%esp
08434720 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08434725 +0x00d:  movl   $0x0,0x8(%esp)
0843472d +0x015:  movl   $0x4,0x4(%esp)
08434735 +0x01d:  mov    %eax,(%esp)
08434738 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843473d +0x025:  mov    %eax,-0x10(%ebp)
08434740 +0x028:  movl   $0x0,-0x14(%ebp)
08434747 +0x02f:  movl   $0x0,-0x18(%ebp)
0843474e +0x036:  lea    -0x14(%ebp),%eax
08434751 +0x039:  mov    %eax,0x4(%esp)
08434755 +0x03d:  mov    0x14(%ebp),%eax
08434758 +0x040:  mov    %eax,(%esp)
0843475b +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08434760 +0x048:  lea    -0x18(%ebp),%eax
08434763 +0x04b:  mov    %eax,0x4(%esp)
08434767 +0x04f:  mov    0x14(%ebp),%eax
0843476a +0x052:  mov    %eax,(%esp)
0843476d +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08434772 +0x05a:  mov    -0x14(%ebp),%eax
08434775 +0x05d:  test   %eax,%eax
08434777 +0x05f:  jne    08434783 <+0x6b>
08434779 +0x061:  mov    $0x1,%eax
0843477e +0x066:  jmp    08434870 <+0x158>
08434783 +0x06b:  mov    -0x14(%ebp),%ebx
08434786 +0x06e:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0843478b +0x073:  mov    %eax,(%esp)
0843478e +0x076:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08434793 +0x07b:  mov    %ebx,0x10(%esp)
08434797 +0x07f:  movl   $0x0,0xc(%esp)
0843479f +0x087:  mov    %eax,0x8(%esp)
084347a3 +0x08b:  movl   $"inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)",0x4(%esp)
084347ab +0x093:  mov    -0x10(%ebp),%eax
084347ae +0x096:  mov    %eax,(%esp)
084347b1 +0x099:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084347b6 +0x09e:  movl   $0x1,0x4(%esp)
084347be +0x0a6:  mov    -0x10(%ebp),%eax
084347c1 +0x0a9:  mov    %eax,(%esp)
084347c4 +0x0ac:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084347c9 +0x0b1:  movl   $0x0,-0xc(%ebp)
084347d0 +0x0b8:  jmp    08434857 <+0x13f>
084347d5 +0x0bd:  movl   $0x0,-0x1c(%ebp)
084347dc +0x0c4:  movl   $0x0,-0x20(%ebp)
084347e3 +0x0cb:  lea    -0x1c(%ebp),%eax
084347e6 +0x0ce:  mov    %eax,0x4(%esp)
084347ea +0x0d2:  mov    0x14(%ebp),%eax
084347ed +0x0d5:  mov    %eax,(%esp)
084347f0 +0x0d8:  call   0861c7c8 <_ZN6StreamrsERm>  ; Stream::operator>>(unsigned long&)
084347f5 +0x0dd:  lea    -0x20(%ebp),%eax
084347f8 +0x0e0:  mov    %eax,0x4(%esp)
084347fc +0x0e4:  mov    0x14(%ebp),%eax
084347ff +0x0e7:  mov    %eax,(%esp)
08434802 +0x0ea:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08434807 +0x0ef:  mov    -0x1c(%ebp),%eax
0843480a +0x0f2:  test   %eax,%eax
0843480c +0x0f4:  je     0843486a <+0x152>
0843480e +0x0f6:  mov    -0x20(%ebp),%esi
08434811 +0x0f9:  mov    -0x1c(%ebp),%ebx
08434814 +0x0fc:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08434819 +0x101:  mov    %eax,(%esp)
0843481c +0x104:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08434821 +0x109:  mov    %esi,0x10(%esp)
08434825 +0x10d:  mov    %ebx,0xc(%esp)
08434829 +0x111:  mov    %eax,0x8(%esp)
0843482d +0x115:  movl   $"inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)",0x4(%esp)
08434835 +0x11d:  mov    -0x10(%ebp),%eax
08434838 +0x120:  mov    %eax,(%esp)
0843483b +0x123:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434840 +0x128:  movl   $0x1,0x4(%esp)
08434848 +0x130:  mov    -0x10(%ebp),%eax
0843484b +0x133:  mov    %eax,(%esp)
0843484e +0x136:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434853 +0x13b:  addl   $0x1,-0xc(%ebp)
08434857 +0x13f:  mov    -0x18(%ebp),%eax
0843485a +0x142:  cmp    %eax,-0xc(%ebp)
0843485d +0x145:  setb   %al
08434860 +0x148:  test   %al,%al
08434862 +0x14a:  jne    084347d5 <+0xbd>
08434868 +0x150:  jmp    0843486b <+0x153>
0843486a +0x152:  nop
0843486b +0x153:  mov    $0x1,%eax
08434870 +0x158:  add    $0x40,%esp
08434873 +0x15b:  pop    %ebx
08434874 +0x15c:  pop    %esi
08434875 +0x15d:  pop    %ebp
08434876 +0x15e:  ret
08434877 +0x15f:  nop
```

## 反编译 C

```c
// DB_UpdateVendingMachineStatistic::dispatch @ 0x8434718

/* DB_UpdateVendingMachineStatistic::dispatch(int, int, Stream*) */

undefined4 DB_UpdateVendingMachineStatistic::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  ulong uVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  uint local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  uVar1 = local_18;
  if (local_18 != 0) {
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_channel_no(pCVar3);
    MySQL::set_query(local_14,
                     "inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)"
                     ,uVar4,0,uVar1);
    MySQL::exec(local_14,true);
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      local_20 = 0;
      local_24 = 0;
      Stream::operator>>(in_stack_00000010,&local_20);
      Stream::operator>>(in_stack_00000010,&local_24);
      uVar2 = local_20;
      uVar1 = local_24;
      if (local_20 == 0) {
        return 1;
      }
      pCVar3 = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_channel_no(pCVar3);
      MySQL::set_query(local_14,
                       "inSert into log_vending_stat(occ_date,channel_no,item_id,cnt) values(cast(now() as date),%d,%d,%d)"
                       ,uVar4,uVar2,uVar1);
      MySQL::exec(local_14,true);
    }
  }
  return 1;
}
```
