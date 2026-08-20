# dispatch

`_ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream`

`DB_InsertPoliceSaveChatting::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPoliceSaveChatting` | `0x0843c514` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c514  _ZN27DB_InsertPoliceSaveChatting8dispatchEiiP6Stream
#           DB_InsertPoliceSaveChatting::dispatch(int, int, Stream*)
# range [0x0843c514, 0x0843c6a9]
0843c514 +0x000:  push   %ebp
0843c515 +0x001:  mov    %esp,%ebp
0843c517 +0x003:  push   %edi
0843c518 +0x004:  push   %ebx
0843c519 +0x005:  sub    $0x330,%esp
0843c51f +0x00b:  movl   $0x0,-0x10(%ebp)
0843c526 +0x012:  movb   $0x0,-0x11(%ebp)
0843c52a +0x016:  lea    -0x111(%ebp),%edx
0843c530 +0x01c:  mov    $0x100,%ebx
0843c535 +0x021:  mov    $0x0,%eax
0843c53a +0x026:  mov    %edx,%ecx
0843c53c +0x028:  and    $0x1,%ecx
0843c53f +0x02b:  test   %ecx,%ecx
0843c541 +0x02d:  je     0843c54b <+0x37>
0843c543 +0x02f:  mov    %al,(%edx)
0843c545 +0x031:  add    $0x1,%edx
0843c548 +0x034:  sub    $0x1,%ebx
0843c54b +0x037:  mov    %edx,%ecx
0843c54d +0x039:  and    $0x2,%ecx
0843c550 +0x03c:  test   %ecx,%ecx
0843c552 +0x03e:  je     0843c55d <+0x49>
0843c554 +0x040:  mov    %ax,(%edx)
0843c557 +0x043:  add    $0x2,%edx
0843c55a +0x046:  sub    $0x2,%ebx
0843c55d +0x049:  mov    %ebx,%ecx
0843c55f +0x04b:  shr    $0x2,%ecx
0843c562 +0x04e:  mov    %edx,%edi
0843c564 +0x050:  rep stos %eax,%es:(%edi)
0843c566 +0x052:  mov    %edi,%edx
0843c568 +0x054:  mov    %ebx,%ecx
0843c56a +0x056:  and    $0x2,%ecx
0843c56d +0x059:  test   %ecx,%ecx
0843c56f +0x05b:  je     0843c577 <+0x63>
0843c571 +0x05d:  mov    %ax,(%edx)
0843c574 +0x060:  add    $0x2,%edx
0843c577 +0x063:  mov    %ebx,%ecx
0843c579 +0x065:  and    $0x1,%ecx
0843c57c +0x068:  test   %ecx,%ecx
0843c57e +0x06a:  je     0843c585 <+0x71>
0843c580 +0x06c:  mov    %al,(%edx)
0843c582 +0x06e:  add    $0x1,%edx
0843c585 +0x071:  lea    -0x311(%ebp),%edx
0843c58b +0x077:  mov    $0x200,%ebx
0843c590 +0x07c:  mov    $0x0,%eax
0843c595 +0x081:  mov    %edx,%ecx
0843c597 +0x083:  and    $0x1,%ecx
0843c59a +0x086:  test   %ecx,%ecx
0843c59c +0x088:  je     0843c5a6 <+0x92>
0843c59e +0x08a:  mov    %al,(%edx)
0843c5a0 +0x08c:  add    $0x1,%edx
0843c5a3 +0x08f:  sub    $0x1,%ebx
0843c5a6 +0x092:  mov    %edx,%ecx
0843c5a8 +0x094:  and    $0x2,%ecx
0843c5ab +0x097:  test   %ecx,%ecx
0843c5ad +0x099:  je     0843c5b8 <+0xa4>
0843c5af +0x09b:  mov    %ax,(%edx)
0843c5b2 +0x09e:  add    $0x2,%edx
0843c5b5 +0x0a1:  sub    $0x2,%ebx
0843c5b8 +0x0a4:  mov    %ebx,%ecx
0843c5ba +0x0a6:  shr    $0x2,%ecx
0843c5bd +0x0a9:  mov    %edx,%edi
0843c5bf +0x0ab:  rep stos %eax,%es:(%edi)
0843c5c1 +0x0ad:  mov    %edi,%edx
0843c5c3 +0x0af:  mov    %ebx,%ecx
0843c5c5 +0x0b1:  and    $0x2,%ecx
0843c5c8 +0x0b4:  test   %ecx,%ecx
0843c5ca +0x0b6:  je     0843c5d2 <+0xbe>
0843c5cc +0x0b8:  mov    %ax,(%edx)
0843c5cf +0x0bb:  add    $0x2,%edx
0843c5d2 +0x0be:  mov    %ebx,%ecx
0843c5d4 +0x0c0:  and    $0x1,%ecx
0843c5d7 +0x0c3:  test   %ecx,%ecx
0843c5d9 +0x0c5:  je     0843c5e0 <+0xcc>
0843c5db +0x0c7:  mov    %al,(%edx)
0843c5dd +0x0c9:  add    $0x1,%edx
0843c5e0 +0x0cc:  lea    -0x10(%ebp),%eax
0843c5e3 +0x0cf:  mov    %eax,0x4(%esp)
0843c5e7 +0x0d3:  mov    0x14(%ebp),%eax
0843c5ea +0x0d6:  mov    %eax,(%esp)
0843c5ed +0x0d9:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843c5f2 +0x0de:  lea    -0x11(%ebp),%eax
0843c5f5 +0x0e1:  mov    %eax,0x4(%esp)
0843c5f9 +0x0e5:  mov    0x14(%ebp),%eax
0843c5fc +0x0e8:  mov    %eax,(%esp)
0843c5ff +0x0eb:  call   0861c4f0 <_ZN6StreamrsERc>  ; Stream::operator>>(char&)
0843c604 +0x0f0:  lea    -0x111(%ebp),%eax
0843c60a +0x0f6:  mov    %eax,0x4(%esp)
0843c60e +0x0fa:  mov    0x14(%ebp),%eax
0843c611 +0x0fd:  mov    %eax,(%esp)
0843c614 +0x100:  call   0861c6a8 <_ZN6StreamrsEPc>  ; Stream::operator>>(char*)
0843c619 +0x105:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843c61e +0x10a:  movl   $0x0,0x8(%esp)
0843c626 +0x112:  movl   $0x4,0x4(%esp)
0843c62e +0x11a:  mov    %eax,(%esp)
0843c631 +0x11d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843c636 +0x122:  mov    %eax,-0xc(%ebp)
0843c639 +0x125:  lea    -0x111(%ebp),%eax
0843c63f +0x12b:  mov    %eax,0x8(%esp)
0843c643 +0x12f:  lea    -0x311(%ebp),%eax
0843c649 +0x135:  mov    %eax,0x4(%esp)
0843c64d +0x139:  mov    -0xc(%ebp),%eax
0843c650 +0x13c:  mov    %eax,(%esp)
0843c653 +0x13f:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0843c658 +0x144:  movzbl -0x11(%ebp),%eax
0843c65c +0x148:  movsbl %al,%edx
0843c65f +0x14b:  mov    -0x10(%ebp),%eax
0843c662 +0x14e:  lea    -0x311(%ebp),%ecx
0843c668 +0x154:  mov    %ecx,0x10(%esp)
0843c66c +0x158:  mov    %edx,0xc(%esp)
0843c670 +0x15c:  mov    %eax,0x8(%esp)
0843c674 +0x160:  movl   $"inSert into log_police_chatting(charac_no, msg_type, occ_time, message) values(%u, %d, unix_timestamp(now()), '%s')",0x4(%esp)
0843c67c +0x168:  mov    -0xc(%ebp),%eax
0843c67f +0x16b:  mov    %eax,(%esp)
0843c682 +0x16e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843c687 +0x173:  movl   $0x1,0x4(%esp)
0843c68f +0x17b:  mov    -0xc(%ebp),%eax
0843c692 +0x17e:  mov    %eax,(%esp)
0843c695 +0x181:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843c69a +0x186:  mov    $0x1,%eax
0843c69f +0x18b:  add    $0x330,%esp
0843c6a5 +0x191:  pop    %ebx
0843c6a6 +0x192:  pop    %edi
0843c6a7 +0x193:  pop    %ebp
0843c6a8 +0x194:  ret
0843c6a9 +0x195:  nop
```

## 反编译 C

```c
// DB_InsertPoliceSaveChatting::dispatch @ 0x843c514

/* DB_InsertPoliceSaveChatting::dispatch(int, int, Stream*) */

undefined4 DB_InsertPoliceSaveChatting::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  Stream *in_stack_00000010;
  char local_315;
  char local_314 [511];
  char local_115;
  char local_114 [255];
  char local_15;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_15 = '\0';
  pcVar2 = &local_115;
  uVar3 = 0x100;
  bVar4 = ((uint)pcVar2 & 1) != 0;
  if (bVar4) {
    local_115 = '\0';
    pcVar2 = local_114;
    uVar3 = 0xff;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar3 = uVar3 - 2;
  }
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if ((uVar3 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (bVar4) {
    *pcVar2 = '\0';
  }
  pcVar2 = &local_315;
  uVar3 = 0x200;
  bVar4 = ((uint)pcVar2 & 1) != 0;
  if (bVar4) {
    local_315 = '\0';
    pcVar2 = local_314;
    uVar3 = 0x1ff;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar3 = uVar3 - 2;
  }
  for (uVar1 = uVar3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  if ((uVar3 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (bVar4) {
    *pcVar2 = '\0';
  }
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_15);
  Stream::operator>>(in_stack_00000010,&local_115);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  MySQL::escape_string(local_10,&local_315,&local_115);
  MySQL::set_query(local_10,
                   "inSert into log_police_chatting(charac_no, msg_type, occ_time, message) values(%u, %d, unix_timestamp(now()), \'%s\')"
                   ,local_14,(int)local_15,&local_315);
  MySQL::exec(local_10,true);
  return 1;
}
```
