# dispatch

`_ZN24DB_UpdateNPCRelationship8dispatchEiiP6Stream`

`DB_UpdateNPCRelationship::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateNPCRelationship` | `0x08435e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08435e1e  _ZN24DB_UpdateNPCRelationship8dispatchEiiP6Stream
#           DB_UpdateNPCRelationship::dispatch(int, int, Stream*)
# range [0x08435e1e, 0x08435ecb]
08435e1e +0x00:  push   %ebp
08435e1f +0x01:  mov    %esp,%ebp
08435e21 +0x03:  push   %ebx
08435e22 +0x04:  sub    $0x34,%esp
08435e25 +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08435e2a +0x0c:  movl   $0x0,0x8(%esp)
08435e32 +0x14:  movl   $0x2,0x4(%esp)
08435e3a +0x1c:  mov    %eax,(%esp)
08435e3d +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08435e42 +0x24:  mov    %eax,-0x10(%ebp)
08435e45 +0x27:  mov    0x14(%ebp),%eax
08435e48 +0x2a:  mov    %eax,(%esp)
08435e4b +0x2d:  call   0845321c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5e32>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5e32
08435e50 +0x32:  mov    %eax,-0xc(%ebp)
08435e53 +0x35:  mov    -0xc(%ebp),%eax
08435e56 +0x38:  mov    (%eax),%ebx
08435e58 +0x3a:  mov    -0xc(%ebp),%eax
08435e5b +0x3d:  mov    0x4(%eax),%edx
08435e5e +0x40:  mov    %edx,%eax
08435e60 +0x42:  add    %eax,%eax
08435e62 +0x44:  add    %edx,%eax
08435e64 +0x46:  shl    $0x2,%eax
08435e67 +0x49:  mov    -0xc(%ebp),%edx
08435e6a +0x4c:  add    $0x8,%edx
08435e6d +0x4f:  mov    %eax,0xc(%esp)
08435e71 +0x53:  mov    %edx,0x8(%esp)
08435e75 +0x57:  movl   $0x0,0x4(%esp)
08435e7d +0x5f:  mov    -0x10(%ebp),%eax
08435e80 +0x62:  mov    %eax,(%esp)
08435e83 +0x65:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08435e88 +0x6a:  mov    -0xc(%ebp),%edx
08435e8b +0x6d:  mov    0x4(%edx),%edx
08435e8e +0x70:  mov    %ebx,0x10(%esp)
08435e92 +0x74:  mov    %eax,0xc(%esp)
08435e96 +0x78:  mov    %edx,0x8(%esp)
08435e9a +0x7c:  movl   $"upDate charac_npc set npc_cnt=%d,npc_data='%s' where charac_no=%d",0x4(%esp)
08435ea2 +0x84:  mov    -0x10(%ebp),%eax
08435ea5 +0x87:  mov    %eax,(%esp)
08435ea8 +0x8a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08435ead +0x8f:  movl   $0x1,0x4(%esp)
08435eb5 +0x97:  mov    -0x10(%ebp),%eax
08435eb8 +0x9a:  mov    %eax,(%esp)
08435ebb +0x9d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08435ec0 +0xa2:  mov    $0x1,%eax
08435ec5 +0xa7:  add    $0x34,%esp
08435ec8 +0xaa:  pop    %ebx
08435ec9 +0xab:  pop    %ebp
08435eca +0xac:  ret
08435ecb +0xad:  nop
```

## 反编译 C

```c
// DB_UpdateNPCRelationship::dispatch @ 0x8435e1e

/* DB_UpdateNPCRelationship::dispatch(int, int, Stream*) */

undefined4 DB_UpdateNPCRelationship::dispatch(int param_1,int param_2,Stream *param_3)

{
  undefined4 uVar1;
  MySQL *this;
  SIG_UPDATE_NPC_RELATIONSHIP *pSVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_UPDATE_NPC_RELATIONSHIP>(in_stack_00000010);
  uVar1 = *(undefined4 *)pSVar2;
  uVar3 = MySQL::blob_to_str(this,0,pSVar2 + 8,*(int *)(pSVar2 + 4) * 0xc);
  MySQL::set_query(this,"upDate charac_npc set npc_cnt=%d,npc_data=\'%s\' where charac_no=%d",
                   *(undefined4 *)(pSVar2 + 4),uVar3,uVar1);
  MySQL::exec(this,true);
  return 1;
}
```
