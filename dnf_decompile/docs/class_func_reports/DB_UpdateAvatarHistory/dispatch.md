# dispatch

`_ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream`

`DB_UpdateAvatarHistory::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateAvatarHistory` | `0x08445246` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08445246  _ZN22DB_UpdateAvatarHistory8dispatchEiiP6Stream
#           DB_UpdateAvatarHistory::dispatch(int, int, Stream*)
# range [0x08445246, 0x08445369]
08445246 +0x000:  push   %ebp
08445247 +0x001:  mov    %esp,%ebp
08445249 +0x003:  push   %esi
0844524a +0x004:  push   %ebx
0844524b +0x005:  sub    $0x50,%esp
0844524e +0x008:  movl   $0x0,-0x10(%ebp)
08445255 +0x00f:  lea    -0x2d(%ebp),%eax
08445258 +0x012:  mov    $0x19,%edx
0844525d +0x017:  mov    $0x0,%ecx
08445262 +0x01c:  mov    %eax,%ebx
08445264 +0x01e:  and    $0x1,%ebx
08445267 +0x021:  test   %ebx,%ebx
08445269 +0x023:  je     08445273 <+0x2d>
0844526b +0x025:  mov    %cl,(%eax)
0844526d +0x027:  add    $0x1,%eax
08445270 +0x02a:  sub    $0x1,%edx
08445273 +0x02d:  mov    %eax,%ebx
08445275 +0x02f:  and    $0x2,%ebx
08445278 +0x032:  test   %ebx,%ebx
0844527a +0x034:  je     08445285 <+0x3f>
0844527c +0x036:  mov    %cx,(%eax)
0844527f +0x039:  add    $0x2,%eax
08445282 +0x03c:  sub    $0x2,%edx
08445285 +0x03f:  mov    %edx,%esi
08445287 +0x041:  and    $0xfffffffc,%esi
0844528a +0x044:  mov    $0x0,%ebx
0844528f +0x049:  mov    %ecx,(%eax,%ebx,1)
08445292 +0x04c:  add    $0x4,%ebx
08445295 +0x04f:  cmp    %esi,%ebx
08445297 +0x051:  jb     0844528f <+0x49>
08445299 +0x053:  add    %ebx,%eax
0844529b +0x055:  mov    %edx,%ebx
0844529d +0x057:  and    $0x2,%ebx
084452a0 +0x05a:  test   %ebx,%ebx
084452a2 +0x05c:  je     084452aa <+0x64>
084452a4 +0x05e:  mov    %cx,(%eax)
084452a7 +0x061:  add    $0x2,%eax
084452aa +0x064:  and    $0x1,%edx
084452ad +0x067:  test   %edx,%edx
084452af +0x069:  je     084452b6 <+0x70>
084452b1 +0x06b:  mov    %cl,(%eax)
084452b3 +0x06d:  add    $0x1,%eax
084452b6 +0x070:  lea    -0x10(%ebp),%eax
084452b9 +0x073:  mov    %eax,0x4(%esp)
084452bd +0x077:  mov    0x14(%ebp),%eax
084452c0 +0x07a:  mov    %eax,(%esp)
084452c3 +0x07d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084452c8 +0x082:  lea    -0x14(%ebp),%eax
084452cb +0x085:  mov    %eax,0x4(%esp)
084452cf +0x089:  mov    0x14(%ebp),%eax
084452d2 +0x08c:  mov    %eax,(%esp)
084452d5 +0x08f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084452da +0x094:  movl   $0x18,0x8(%esp)
084452e2 +0x09c:  lea    -0x2d(%ebp),%eax
084452e5 +0x09f:  mov    %eax,0x4(%esp)
084452e9 +0x0a3:  mov    0x14(%ebp),%eax
084452ec +0x0a6:  mov    %eax,(%esp)
084452ef +0x0a9:  call   0861c7fa <_ZN6Stream10get_binaryEPvi>  ; Stream::get_binary(void*, int)
084452f4 +0x0ae:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084452f9 +0x0b3:  movl   $0x0,0x8(%esp)
08445301 +0x0bb:  movl   $0x3,0x4(%esp)
08445309 +0x0c3:  mov    %eax,(%esp)
0844530c +0x0c6:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08445311 +0x0cb:  mov    %eax,-0xc(%ebp)
08445314 +0x0ce:  mov    -0x10(%ebp),%edx
08445317 +0x0d1:  mov    -0x14(%ebp),%eax
0844531a +0x0d4:  mov    %edx,0x10(%esp)
0844531e +0x0d8:  mov    %eax,0xc(%esp)
08445322 +0x0dc:  lea    -0x2d(%ebp),%eax
08445325 +0x0df:  mov    %eax,0x8(%esp)
08445329 +0x0e3:  movl   $"upDate user_items set to_ipg_agency_no='%s', m_time=now() where ui_id=%d and charac_no=%d",0x4(%esp)
08445331 +0x0eb:  mov    -0xc(%ebp),%eax
08445334 +0x0ee:  mov    %eax,(%esp)
08445337 +0x0f1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844533c +0x0f6:  movl   $0x1,0x4(%esp)
08445344 +0x0fe:  mov    -0xc(%ebp),%eax
08445347 +0x101:  mov    %eax,(%esp)
0844534a +0x104:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844534f +0x109:  xor    $0x1,%eax
08445352 +0x10c:  test   %al,%al
08445354 +0x10e:  je     0844535d <+0x117>
08445356 +0x110:  mov    $0x0,%eax
0844535b +0x115:  jmp    08445362 <+0x11c>
0844535d +0x117:  mov    $0x1,%eax
08445362 +0x11c:  add    $0x50,%esp
08445365 +0x11f:  pop    %ebx
08445366 +0x120:  pop    %esi
08445367 +0x121:  pop    %ebp
08445368 +0x122:  ret
08445369 +0x123:  nop
```

## 反编译 C

```c
// DB_UpdateAvatarHistory::dispatch @ 0x8445246

/* DB_UpdateAvatarHistory::dispatch(int, int, Stream*) */

bool DB_UpdateAvatarHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  Stream *in_stack_00000010;
  undefined1 local_31 [25];
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  puVar2 = (undefined2 *)local_31;
  uVar3 = 0x19;
  bVar5 = ((uint)puVar2 & 1) != 0;
  if (bVar5) {
    local_31[0] = 0;
    puVar2 = (undefined2 *)(local_31 + 1);
    uVar3 = 0x18;
  }
  if (((uint)puVar2 & 2) != 0) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
    uVar3 = uVar3 - 2;
  }
  uVar4 = 0;
  do {
    *(undefined4 *)((int)puVar2 + uVar4) = 0;
    uVar4 = uVar4 + 4;
  } while (uVar4 < (uVar3 & 0xfffffffc));
  puVar2 = (undefined2 *)((int)puVar2 + uVar4);
  if ((uVar3 & 2) != 0) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  if (!bVar5) {
    *(undefined1 *)puVar2 = 0;
  }
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::get_binary(in_stack_00000010,local_31,0x18);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_10,
                   "upDate user_items set to_ipg_agency_no=\'%s\', m_time=now() where ui_id=%d and charac_no=%d"
                   ,local_31,local_18,local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
