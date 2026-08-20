# dispatch

`_ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream`

`DB_UpdateSeriaRoomAnimationDeco::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateSeriaRoomAnimationDeco` | `0x0844adc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844adc0  _ZN31DB_UpdateSeriaRoomAnimationDeco8dispatchEiiP6Stream
#           DB_UpdateSeriaRoomAnimationDeco::dispatch(int, int, Stream*)
# range [0x0844adc0, 0x0844af73]
0844adc0 +0x000:  push   %ebp
0844adc1 +0x001:  mov    %esp,%ebp
0844adc3 +0x003:  push   %edi
0844adc4 +0x004:  push   %esi
0844adc5 +0x005:  push   %ebx
0844adc6 +0x006:  sub    $0x5c,%esp
0844adc9 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844adce +0x00e:  movl   $0x0,0x8(%esp)
0844add6 +0x016:  movl   $0x9,0x4(%esp)
0844adde +0x01e:  mov    %eax,(%esp)
0844ade1 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844ade6 +0x026:  mov    %eax,-0x1c(%ebp)
0844ade9 +0x029:  movl   $0x0,-0x20(%ebp)
0844adf0 +0x030:  movw   $0x0,-0x22(%ebp)
0844adf6 +0x036:  movl   $0x0,-0x28(%ebp)
0844adfd +0x03d:  movw   $0x0,-0x2a(%ebp)
0844ae03 +0x043:  movw   $0x0,-0x2c(%ebp)
0844ae09 +0x049:  lea    -0x20(%ebp),%eax
0844ae0c +0x04c:  mov    %eax,0x4(%esp)
0844ae10 +0x050:  mov    0x14(%ebp),%eax
0844ae13 +0x053:  mov    %eax,(%esp)
0844ae16 +0x056:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844ae1b +0x05b:  lea    -0x22(%ebp),%eax
0844ae1e +0x05e:  mov    %eax,0x4(%esp)
0844ae22 +0x062:  mov    0x14(%ebp),%eax
0844ae25 +0x065:  mov    %eax,(%esp)
0844ae28 +0x068:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0844ae2d +0x06d:  lea    -0x28(%ebp),%eax
0844ae30 +0x070:  mov    %eax,0x4(%esp)
0844ae34 +0x074:  mov    0x14(%ebp),%eax
0844ae37 +0x077:  mov    %eax,(%esp)
0844ae3a +0x07a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0844ae3f +0x07f:  lea    -0x2a(%ebp),%eax
0844ae42 +0x082:  mov    %eax,0x4(%esp)
0844ae46 +0x086:  mov    0x14(%ebp),%eax
0844ae49 +0x089:  mov    %eax,(%esp)
0844ae4c +0x08c:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0844ae51 +0x091:  lea    -0x2c(%ebp),%eax
0844ae54 +0x094:  mov    %eax,0x4(%esp)
0844ae58 +0x098:  mov    0x14(%ebp),%eax
0844ae5b +0x09b:  mov    %eax,(%esp)
0844ae5e +0x09e:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0844ae63 +0x0a3:  mov    -0x28(%ebp),%esi
0844ae66 +0x0a6:  movzwl -0x22(%ebp),%eax
0844ae6a +0x0aa:  movswl %ax,%ebx
0844ae6d +0x0ad:  mov    -0x20(%ebp),%eax
0844ae70 +0x0b0:  movl   $0x0,0x4(%esp)
0844ae78 +0x0b8:  mov    %eax,(%esp)
0844ae7b +0x0bb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844ae80 +0x0c0:  movzwl -0x2c(%ebp),%edx
0844ae84 +0x0c4:  movswl %dx,%ecx
0844ae87 +0x0c7:  movzwl -0x2a(%ebp),%edx
0844ae8b +0x0cb:  movswl %dx,%edx
0844ae8e +0x0ce:  mov    %esi,0x18(%esp)
0844ae92 +0x0d2:  mov    %ebx,0x14(%esp)
0844ae96 +0x0d6:  mov    %eax,0x10(%esp)
0844ae9a +0x0da:  mov    %ecx,0xc(%esp)
0844ae9e +0x0de:  mov    %edx,0x8(%esp)
0844aea2 +0x0e2:  movl   $"upDate event_1208_seriaroom_anideco set receive_flow = %d, deco_flow = %d where m_id = %s and server_id = %d and charac_no = %d",0x4(%esp)
0844aeaa +0x0ea:  mov    -0x1c(%ebp),%eax
0844aead +0x0ed:  mov    %eax,(%esp)
0844aeb0 +0x0f0:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844aeb5 +0x0f5:  movl   $0x1,0x4(%esp)
0844aebd +0x0fd:  mov    -0x1c(%ebp),%eax
0844aec0 +0x100:  mov    %eax,(%esp)
0844aec3 +0x103:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844aec8 +0x108:  xor    $0x1,%eax
0844aecb +0x10b:  test   %al,%al
0844aecd +0x10d:  je     0844aed9 <+0x119>
0844aecf +0x10f:  mov    $0x0,%eax
0844aed4 +0x114:  jmp    0844af6b <+0x1ab>
0844aed9 +0x119:  mov    -0x1c(%ebp),%eax
0844aedc +0x11c:  mov    %eax,(%esp)
0844aedf +0x11f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844aee4 +0x124:  or     %edx,%eax
0844aee6 +0x126:  test   %eax,%eax
0844aee8 +0x128:  sete   %al
0844aeeb +0x12b:  test   %al,%al
0844aeed +0x12d:  je     0844af66 <+0x1a6>
0844aeef +0x12f:  movzwl -0x2c(%ebp),%eax
0844aef3 +0x133:  cwtl
0844aef4 +0x134:  mov    %eax,-0x3c(%ebp)
0844aef7 +0x137:  movzwl -0x2a(%ebp),%eax
0844aefb +0x13b:  movswl %ax,%edi
0844aefe +0x13e:  mov    -0x28(%ebp),%esi
0844af01 +0x141:  movzwl -0x22(%ebp),%eax
0844af05 +0x145:  movswl %ax,%ebx
0844af08 +0x148:  mov    -0x20(%ebp),%eax
0844af0b +0x14b:  movl   $0x0,0x4(%esp)
0844af13 +0x153:  mov    %eax,(%esp)
0844af16 +0x156:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0844af1b +0x15b:  mov    -0x3c(%ebp),%edx
0844af1e +0x15e:  mov    %edx,0x18(%esp)
0844af22 +0x162:  mov    %edi,0x14(%esp)
0844af26 +0x166:  mov    %esi,0x10(%esp)
0844af2a +0x16a:  mov    %ebx,0xc(%esp)
0844af2e +0x16e:  mov    %eax,0x8(%esp)
0844af32 +0x172:  movl   $"inSert into event_1208_seriaroom_anideco(m_id ,server_id, charac_no, receive_flow, deco_flow, occ_date) values(%s, %d, %d, %d, %d, now())",0x4(%esp)
0844af3a +0x17a:  mov    -0x1c(%ebp),%eax
0844af3d +0x17d:  mov    %eax,(%esp)
0844af40 +0x180:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844af45 +0x185:  movl   $0x1,0x4(%esp)
0844af4d +0x18d:  mov    -0x1c(%ebp),%eax
0844af50 +0x190:  mov    %eax,(%esp)
0844af53 +0x193:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844af58 +0x198:  xor    $0x1,%eax
0844af5b +0x19b:  test   %al,%al
0844af5d +0x19d:  je     0844af66 <+0x1a6>
0844af5f +0x19f:  mov    $0x0,%eax
0844af64 +0x1a4:  jmp    0844af6b <+0x1ab>
0844af66 +0x1a6:  mov    $0x1,%eax
0844af6b +0x1ab:  add    $0x5c,%esp
0844af6e +0x1ae:  pop    %ebx
0844af6f +0x1af:  pop    %esi
0844af70 +0x1b0:  pop    %edi
0844af71 +0x1b1:  pop    %ebp
0844af72 +0x1b2:  ret
0844af73 +0x1b3:  nop
```

## 反编译 C

```c
// DB_UpdateSeriaRoomAnimationDeco::dispatch @ 0x844adc0

/* DB_UpdateSeriaRoomAnimationDeco::dispatch(int, int, Stream*) */

undefined4 DB_UpdateSeriaRoomAnimationDeco::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  short local_30;
  short local_2e;
  int local_2c;
  short local_26;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  local_26 = 0;
  local_2c = 0;
  local_2e = 0;
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_26);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_2e);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar1 = local_2c;
  iVar4 = (int)local_26;
  uVar3 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate event_1208_seriaroom_anideco set receive_flow = %d, deco_flow = %d where m_id = %s and server_id = %d and charac_no = %d"
                   ,(int)local_2e,(int)local_30,uVar3,iVar4,iVar1);
  cVar2 = MySQL::exec(local_20,true);
  if (cVar2 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_20);
    iVar1 = local_2c;
    if (lVar7 == 0) {
      iVar4 = (int)local_30;
      iVar6 = (int)local_2e;
      iVar5 = (int)local_26;
      uVar3 = NumberToString(local_24,0);
      MySQL::set_query(local_20,
                       "inSert into event_1208_seriaroom_anideco(m_id ,server_id, charac_no, receive_flow, deco_flow, occ_date) values(%s, %d, %d, %d, %d, now())"
                       ,uVar3,iVar5,iVar1,iVar6,iVar4);
      cVar2 = MySQL::exec(local_20,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
