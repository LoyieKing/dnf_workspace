# _saveCharacInvenExpand

`_ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY`

`DB_SaveInven::_saveCharacInvenExpand(SIG_SAVE_INVENTORY*) const`

| 类 | 地址 |
|---|---|
| `DB_SaveInven` | `0x08416b38` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08416b38  _ZNK12DB_SaveInven22_saveCharacInvenExpandEP18SIG_SAVE_INVENTORY
#           DB_SaveInven::_saveCharacInvenExpand(SIG_SAVE_INVENTORY*) const
# range [0x08416b38, 0x08416cf9]
08416b38 +0x000:  push   %ebp
08416b39 +0x001:  mov    %esp,%ebp
08416b3b +0x003:  push   %edi
08416b3c +0x004:  push   %esi
08416b3d +0x005:  push   %ebx
08416b3e +0x006:  sub    $0x3dcc,%esp
08416b44 +0x00c:  lea    -0x3db5(%ebp),%eax
08416b4a +0x012:  mov    $0x2b82,%edx
08416b4f +0x017:  mov    %edx,0x8(%esp)
08416b53 +0x01b:  movl   $0x0,0x4(%esp)
08416b5b +0x023:  mov    %eax,(%esp)
08416b5e +0x026:  call   0807dcc0 <_init+0x5b8>
08416b63 +0x02b:  movl   $0x2b82,-0x20(%ebp)
08416b6a +0x032:  mov    0xc(%ebp),%eax
08416b6d +0x035:  add    $0x895d,%eax
08416b72 +0x03a:  movl   $0x2438,0xc(%esp)
08416b7a +0x042:  mov    %eax,0x8(%esp)
08416b7e +0x046:  lea    -0x20(%ebp),%eax
08416b81 +0x049:  mov    %eax,0x4(%esp)
08416b85 +0x04d:  lea    -0x3db5(%ebp),%eax
08416b8b +0x053:  mov    %eax,(%esp)
08416b8e +0x056:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08416b93 +0x05b:  xor    $0x1,%eax
08416b96 +0x05e:  test   %al,%al
08416b98 +0x060:  je     08416ba4 <+0x6c>
08416b9a +0x062:  mov    $0x0,%eax
08416b9f +0x067:  jmp    08416cef <+0x1b7>
08416ba4 +0x06c:  lea    -0x1233(%ebp),%edx
08416baa +0x072:  mov    $0x120f,%ebx
08416baf +0x077:  mov    $0x0,%eax
08416bb4 +0x07c:  mov    %edx,%ecx
08416bb6 +0x07e:  and    $0x1,%ecx
08416bb9 +0x081:  test   %ecx,%ecx
08416bbb +0x083:  je     08416bc5 <+0x8d>
08416bbd +0x085:  mov    %al,(%edx)
08416bbf +0x087:  add    $0x1,%edx
08416bc2 +0x08a:  sub    $0x1,%ebx
08416bc5 +0x08d:  mov    %edx,%ecx
08416bc7 +0x08f:  and    $0x2,%ecx
08416bca +0x092:  test   %ecx,%ecx
08416bcc +0x094:  je     08416bd7 <+0x9f>
08416bce +0x096:  mov    %ax,(%edx)
08416bd1 +0x099:  add    $0x2,%edx
08416bd4 +0x09c:  sub    $0x2,%ebx
08416bd7 +0x09f:  mov    %ebx,%ecx
08416bd9 +0x0a1:  shr    $0x2,%ecx
08416bdc +0x0a4:  mov    %edx,%edi
08416bde +0x0a6:  rep stos %eax,%es:(%edi)
08416be0 +0x0a8:  mov    %edi,%edx
08416be2 +0x0aa:  mov    %ebx,%ecx
08416be4 +0x0ac:  and    $0x2,%ecx
08416be7 +0x0af:  test   %ecx,%ecx
08416be9 +0x0b1:  je     08416bf1 <+0xb9>
08416beb +0x0b3:  mov    %ax,(%edx)
08416bee +0x0b6:  add    $0x2,%edx
08416bf1 +0x0b9:  mov    %ebx,%ecx
08416bf3 +0x0bb:  and    $0x1,%ecx
08416bf6 +0x0be:  test   %ecx,%ecx
08416bf8 +0x0c0:  je     08416bff <+0xc7>
08416bfa +0x0c2:  mov    %al,(%edx)
08416bfc +0x0c4:  add    $0x1,%edx
08416bff +0x0c7:  movl   $0x120f,-0x24(%ebp)
08416c06 +0x0ce:  mov    0xc(%ebp),%eax
08416c09 +0x0d1:  add    $0x40ac,%eax
08416c0e +0x0d6:  movl   $0xf03,0xc(%esp)
08416c16 +0x0de:  mov    %eax,0x8(%esp)
08416c1a +0x0e2:  lea    -0x24(%ebp),%eax
08416c1d +0x0e5:  mov    %eax,0x4(%esp)
08416c21 +0x0e9:  lea    -0x1233(%ebp),%eax
08416c27 +0x0ef:  mov    %eax,(%esp)
08416c2a +0x0f2:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
08416c2f +0x0f7:  xor    $0x1,%eax
08416c32 +0x0fa:  test   %al,%al
08416c34 +0x0fc:  je     08416c40 <+0x108>
08416c36 +0x0fe:  mov    $0x0,%eax
08416c3b +0x103:  jmp    08416cef <+0x1b7>
08416c40 +0x108:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08416c45 +0x10d:  movl   $0x0,0x8(%esp)
08416c4d +0x115:  movl   $0x3,0x4(%esp)
08416c55 +0x11d:  mov    %eax,(%esp)
08416c58 +0x120:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08416c5d +0x125:  mov    %eax,-0x1c(%ebp)
08416c60 +0x128:  mov    0xc(%ebp),%eax
08416c63 +0x12b:  mov    0x4(%eax),%esi
08416c66 +0x12e:  mov    -0x24(%ebp),%eax
08416c69 +0x131:  mov    %eax,0xc(%esp)
08416c6d +0x135:  lea    -0x1233(%ebp),%eax
08416c73 +0x13b:  mov    %eax,0x8(%esp)
08416c77 +0x13f:  movl   $0x1,0x4(%esp)
08416c7f +0x147:  mov    -0x1c(%ebp),%eax
08416c82 +0x14a:  mov    %eax,(%esp)
08416c85 +0x14d:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416c8a +0x152:  mov    %eax,%ebx
08416c8c +0x154:  mov    -0x20(%ebp),%eax
08416c8f +0x157:  mov    %eax,0xc(%esp)
08416c93 +0x15b:  lea    -0x3db5(%ebp),%eax
08416c99 +0x161:  mov    %eax,0x8(%esp)
08416c9d +0x165:  movl   $0x0,0x4(%esp)
08416ca5 +0x16d:  mov    -0x1c(%ebp),%eax
08416ca8 +0x170:  mov    %eax,(%esp)
08416cab +0x173:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08416cb0 +0x178:  mov    0xc(%ebp),%edx
08416cb3 +0x17b:  mov    0x8959(%edx),%edx
08416cb9 +0x181:  mov    %esi,0x14(%esp)
08416cbd +0x185:  mov    %ebx,0x10(%esp)
08416cc1 +0x189:  mov    %eax,0xc(%esp)
08416cc5 +0x18d:  mov    %edx,0x8(%esp)
08416cc9 +0x191:  movl   $"upDate charac_inven_expand set cargo_capacity=%d,cargo='%s',jewel='%s' where charac_no=%u",0x4(%esp)
08416cd1 +0x199:  mov    -0x1c(%ebp),%eax
08416cd4 +0x19c:  mov    %eax,(%esp)
08416cd7 +0x19f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08416cdc +0x1a4:  movl   $0x1,0x4(%esp)
08416ce4 +0x1ac:  mov    -0x1c(%ebp),%eax
08416ce7 +0x1af:  mov    %eax,(%esp)
08416cea +0x1b2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08416cef +0x1b7:  add    $0x3dcc,%esp
08416cf5 +0x1bd:  pop    %ebx
08416cf6 +0x1be:  pop    %esi
08416cf7 +0x1bf:  pop    %edi
08416cf8 +0x1c0:  pop    %ebp
08416cf9 +0x1c1:  ret
```

## 反编译 C

```c
// DB_SaveInven::_saveCharacInvenExpand @ 0x8416b38

/* DB_SaveInven::_saveCharacInvenExpand(SIG_SAVE_INVENTORY*) const */

undefined4 __thiscall
DB_SaveInven::_saveCharacInvenExpand(DB_SaveInven *this,SIG_SAVE_INVENTORY *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  char local_3db9 [11138];
  char local_1237;
  char local_1236 [4622];
  uint local_28;
  uint local_24;
  MySQL *local_20;
  
  bVar9 = 0;
  memset(local_3db9,0,0x2b82);
  local_24 = 0x2b82;
  cVar1 = compress_zip(local_3db9,&local_24,(char *)(param_1 + 0x895d),0x2438);
  if (cVar1 == '\x01') {
    pcVar6 = &local_1237;
    uVar7 = 0x120f;
    bVar8 = ((uint)pcVar6 & 1) != 0;
    if (bVar8) {
      local_1237 = '\0';
      pcVar6 = local_1236;
      uVar7 = 0x120e;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar8) {
      *pcVar6 = '\0';
    }
    local_28 = 0x120f;
    cVar1 = compress_zip(&local_1237,&local_28,(char *)(param_1 + 0x40ac),0xf03);
    if (cVar1 == '\x01') {
      local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
      uVar2 = *(undefined4 *)(param_1 + 4);
      uVar3 = MySQL::blob_to_str(local_20,1,&local_1237,local_28);
      uVar4 = MySQL::blob_to_str(local_20,0,local_3db9,local_24);
      MySQL::set_query(local_20,
                       "upDate charac_inven_expand set cargo_capacity=%d,cargo=\'%s\',jewel=\'%s\' where charac_no=%u"
                       ,*(undefined4 *)(param_1 + 0x8959),uVar4,uVar3,uVar2);
      uVar2 = MySQL::exec(local_20,true);
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
