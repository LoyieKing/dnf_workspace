# insert_one_item_info_master

`_ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_`

`sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625c54  _ZN11sync_script11CSyncScript27insert_one_item_info_masterEhtPKcS2_
#           sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*, char const*)
# range [0x08625c54, 0x08625d95]
08625c54 +0x000:  push   %ebp
08625c55 +0x001:  mov    %esp,%ebp
08625c57 +0x003:  push   %edi
08625c58 +0x004:  push   %ebx
08625c59 +0x005:  sub    $0x110,%esp
08625c5f +0x00b:  mov    0xc(%ebp),%edx
08625c62 +0x00e:  mov    0x10(%ebp),%eax
08625c65 +0x011:  mov    %dl,-0xec(%ebp)
08625c6b +0x017:  mov    %ax,-0xf0(%ebp)
08625c72 +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08625c77 +0x023:  movl   $0x0,0x8(%esp)
08625c7f +0x02b:  movl   $0x5,0x4(%esp)
08625c87 +0x033:  mov    %eax,(%esp)
08625c8a +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08625c8f +0x03b:  mov    %eax,-0x10(%ebp)
08625c92 +0x03e:  movl   $0x0,-0x18(%ebp)
08625c99 +0x045:  movl   $0x0,-0x14(%ebp)
08625ca0 +0x04c:  mov    0x14(%ebp),%eax
08625ca3 +0x04f:  mov    %eax,(%esp)
08625ca6 +0x052:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08625cab +0x057:  mov    %eax,-0x18(%ebp)
08625cae +0x05a:  mov    0x18(%ebp),%eax
08625cb1 +0x05d:  mov    %eax,(%esp)
08625cb4 +0x060:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08625cb9 +0x065:  mov    %eax,-0x14(%ebp)
08625cbc +0x068:  lea    -0xe0(%ebp),%ebx
08625cc2 +0x06e:  mov    $0x0,%eax
08625cc7 +0x073:  mov    $0x32,%edx
08625ccc +0x078:  mov    %ebx,%edi
08625cce +0x07a:  mov    %edx,%ecx
08625cd0 +0x07c:  rep stos %eax,%es:(%edi)
08625cd2 +0x07e:  movl   $0x0,-0xc(%ebp)
08625cd9 +0x085:  jmp    08625d0a <+0xb6>
08625cdb +0x087:  mov    -0xc(%ebp),%eax
08625cde +0x08a:  lea    -0xe0(%ebp),%edx
08625ce4 +0x090:  imul   $0x64,%eax,%eax
08625ce7 +0x093:  lea    (%edx,%eax,1),%eax
08625cea +0x096:  mov    %eax,%edx
08625cec +0x098:  mov    -0xc(%ebp),%eax
08625cef +0x09b:  mov    -0x18(%ebp,%eax,4),%eax
08625cf3 +0x09f:  mov    %edx,0x8(%esp)
08625cf7 +0x0a3:  mov    %eax,0x4(%esp)
08625cfb +0x0a7:  mov    -0x10(%ebp),%eax
08625cfe +0x0aa:  mov    %eax,(%esp)
08625d01 +0x0ad:  call   0861cc47 <_Z15GetEscapeStringP5MySQLPKcPc>  ; GetEscapeString(MySQL*, char const*, char*)
08625d06 +0x0b2:  addl   $0x1,-0xc(%ebp)
08625d0a +0x0b6:  mov    -0xc(%ebp),%eax
08625d0d +0x0b9:  cmp    $0x1,%eax
08625d10 +0x0bc:  setbe  %al
08625d13 +0x0bf:  test   %al,%al
08625d15 +0x0c1:  jne    08625cdb <+0x87>
08625d17 +0x0c3:  lea    -0xe0(%ebp),%eax
08625d1d +0x0c9:  lea    0x64(%eax),%ebx
08625d20 +0x0cc:  lea    -0xe0(%ebp),%ecx
08625d26 +0x0d2:  movzwl -0xf0(%ebp),%edx
08625d2d +0x0d9:  movzbl -0xec(%ebp),%eax
08625d34 +0x0e0:  mov    %ebx,0x14(%esp)
08625d38 +0x0e4:  mov    %ecx,0x10(%esp)
08625d3c +0x0e8:  mov    %edx,0xc(%esp)
08625d40 +0x0ec:  mov    %eax,0x8(%esp)
08625d44 +0x0f0:  movl   $"inSert into dnf_item_info_master(master_no, sub_no, name, master_explain) values(%u, %u, '%s', '%s')",0x4(%esp)
08625d4c +0x0f8:  mov    -0x10(%ebp),%eax
08625d4f +0x0fb:  mov    %eax,(%esp)
08625d52 +0x0fe:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08625d57 +0x103:  xor    $0x1,%eax
08625d5a +0x106:  test   %al,%al
08625d5c +0x108:  je     08625d65 <+0x111>
08625d5e +0x10a:  mov    $0x0,%eax
08625d63 +0x10f:  jmp    08625d8b <+0x137>
08625d65 +0x111:  movl   $0x1,0x4(%esp)
08625d6d +0x119:  mov    -0x10(%ebp),%eax
08625d70 +0x11c:  mov    %eax,(%esp)
08625d73 +0x11f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08625d78 +0x124:  xor    $0x1,%eax
08625d7b +0x127:  test   %al,%al
08625d7d +0x129:  je     08625d86 <+0x132>
08625d7f +0x12b:  mov    $0x0,%eax
08625d84 +0x130:  jmp    08625d8b <+0x137>
08625d86 +0x132:  mov    $0x1,%eax
08625d8b +0x137:  add    $0x110,%esp
08625d91 +0x13d:  pop    %ebx
08625d92 +0x13e:  pop    %edi
08625d93 +0x13f:  pop    %ebp
08625d94 +0x140:  ret
08625d95 +0x141:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_one_item_info_master @ 0x8625c54

/* sync_script::CSyncScript::insert_one_item_info_master(unsigned char, unsigned short, char const*,
   char const*) */

undefined4 __thiscall
sync_script::CSyncScript::insert_one_item_info_master
          (CSyncScript *this,uchar param_1,ushort param_2,char *param_3,char *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  char local_e4 [100];
  undefined1 local_80 [100];
  char *local_1c [2];
  MySQL *local_14;
  uint local_10;
  
  bVar5 = 0;
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
  local_1c[0] = (char *)0x0;
  local_1c[1] = (char *)0x0;
  local_1c[0] = toMbcs(param_3);
  local_1c[1] = toMbcs(param_4);
  pcVar4 = local_e4;
  for (iVar3 = 0x32; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    GetEscapeString(local_14,local_1c[local_10],local_e4 + local_10 * 100);
  }
  cVar1 = MySQL::set_query(local_14,
                           "inSert into dnf_item_info_master(master_no, sub_no, name, master_explain) values(%u, %u, \'%s\', \'%s\')"
                           ,(uint)param_1,(uint)param_2,local_e4,local_80);
  if (cVar1 == '\x01') {
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
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
