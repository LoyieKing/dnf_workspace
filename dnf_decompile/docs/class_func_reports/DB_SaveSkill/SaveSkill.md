# SaveSkill

`_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL`

`DB_SaveSkill::SaveSkill(SIG_LOAD_SKILL*)`

| 类 | 地址 |
|---|---|
| `DB_SaveSkill` | `0x0841782a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841782a  _ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL
#           DB_SaveSkill::SaveSkill(SIG_LOAD_SKILL*)
# range [0x0841782a, 0x08417a07]
0841782a +0x000:  push   %ebp
0841782b +0x001:  mov    %esp,%ebp
0841782d +0x003:  push   %edi
0841782e +0x004:  push   %esi
0841782f +0x005:  push   %ebx
08417830 +0x006:  sub    $0x7c,%esp
08417833 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08417838 +0x00e:  movl   $0x0,0x8(%esp)
08417840 +0x016:  movl   $0x3,0x4(%esp)
08417848 +0x01e:  mov    %eax,(%esp)
0841784b +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08417850 +0x026:  mov    %eax,-0x1c(%ebp)
08417853 +0x029:  movl   $0x0,-0x24(%ebp)
0841785a +0x030:  mov    0xc(%ebp),%eax
0841785d +0x033:  add    $0xc,%eax
08417860 +0x036:  lea    -0x24(%ebp),%edx
08417863 +0x039:  mov    %edx,0x10(%esp)
08417867 +0x03d:  movl   $0x198,0xc(%esp)
0841786f +0x045:  mov    %eax,0x8(%esp)
08417873 +0x049:  movl   $0x0,0x4(%esp)
0841787b +0x051:  mov    -0x1c(%ebp),%eax
0841787e +0x054:  mov    %eax,(%esp)
08417881 +0x057:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
08417886 +0x05c:  xor    $0x1,%eax
08417889 +0x05f:  test   %al,%al
0841788b +0x061:  je     08417897 <+0x6d>
0841788d +0x063:  mov    $0x0,%eax
08417892 +0x068:  jmp    08417a00 <+0x1d6>
08417897 +0x06d:  movl   $0x0,-0x28(%ebp)
0841789e +0x074:  mov    0xc(%ebp),%eax
084178a1 +0x077:  add    $0x1a8,%eax
084178a6 +0x07c:  lea    -0x28(%ebp),%edx
084178a9 +0x07f:  mov    %edx,0x10(%esp)
084178ad +0x083:  movl   $0x198,0xc(%esp)
084178b5 +0x08b:  mov    %eax,0x8(%esp)
084178b9 +0x08f:  movl   $0x1,0x4(%esp)
084178c1 +0x097:  mov    -0x1c(%ebp),%eax
084178c4 +0x09a:  mov    %eax,(%esp)
084178c7 +0x09d:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
084178cc +0x0a2:  xor    $0x1,%eax
084178cf +0x0a5:  test   %al,%al
084178d1 +0x0a7:  je     084178dd <+0xb3>
084178d3 +0x0a9:  mov    $0x0,%eax
084178d8 +0x0ae:  jmp    08417a00 <+0x1d6>
084178dd +0x0b3:  movl   $0x0,-0x2c(%ebp)
084178e4 +0x0ba:  mov    0xc(%ebp),%eax
084178e7 +0x0bd:  add    $0x348,%eax
084178ec +0x0c2:  lea    -0x2c(%ebp),%edx
084178ef +0x0c5:  mov    %edx,0x10(%esp)
084178f3 +0x0c9:  movl   $0xc8,0xc(%esp)
084178fb +0x0d1:  mov    %eax,0x8(%esp)
084178ff +0x0d5:  movl   $0x4,0x4(%esp)
08417907 +0x0dd:  mov    -0x1c(%ebp),%eax
0841790a +0x0e0:  mov    %eax,(%esp)
0841790d +0x0e3:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
08417912 +0x0e8:  xor    $0x1,%eax
08417915 +0x0eb:  test   %al,%al
08417917 +0x0ed:  je     08417923 <+0xf9>
08417919 +0x0ef:  mov    $0x0,%eax
0841791e +0x0f4:  jmp    08417a00 <+0x1d6>
08417923 +0x0f9:  mov    0xc(%ebp),%eax
08417926 +0x0fc:  mov    (%eax),%esi
08417928 +0x0fe:  mov    0xc(%ebp),%eax
0841792b +0x101:  movzbl 0x411(%eax),%eax
08417932 +0x108:  movzbl %al,%eax
08417935 +0x10b:  mov    %eax,-0x50(%ebp)
08417938 +0x10e:  mov    -0x2c(%ebp),%eax
0841793b +0x111:  mov    %eax,-0x4c(%ebp)
0841793e +0x114:  mov    0xc(%ebp),%eax
08417941 +0x117:  mov    0x344(%eax),%eax
08417947 +0x11d:  mov    %eax,-0x48(%ebp)
0841794a +0x120:  mov    0xc(%ebp),%eax
0841794d +0x123:  mov    0x340(%eax),%eax
08417953 +0x129:  mov    %eax,-0x44(%ebp)
08417956 +0x12c:  mov    -0x28(%ebp),%edx
08417959 +0x12f:  mov    %edx,-0x40(%ebp)
0841795c +0x132:  mov    0xc(%ebp),%eax
0841795f +0x135:  mov    0x1a4(%eax),%eax
08417965 +0x13b:  mov    %eax,-0x3c(%ebp)
08417968 +0x13e:  mov    -0x24(%ebp),%edi
0841796b +0x141:  mov    0xc(%ebp),%eax
0841796e +0x144:  mov    0x8(%eax),%ebx
08417971 +0x147:  mov    0xc(%ebp),%eax
08417974 +0x14a:  movzbl 0x410(%eax),%eax
0841797b +0x151:  movzbl %al,%eax
0841797e +0x154:  mov    %eax,(%esp)
08417981 +0x157:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
08417986 +0x15c:  mov    %esi,0x2c(%esp)
0841798a +0x160:  mov    -0x50(%ebp),%edx
0841798d +0x163:  mov    %edx,0x28(%esp)
08417991 +0x167:  mov    -0x4c(%ebp),%edx
08417994 +0x16a:  mov    %edx,0x24(%esp)
08417998 +0x16e:  mov    -0x48(%ebp),%edx
0841799b +0x171:  mov    %edx,0x20(%esp)
0841799f +0x175:  mov    -0x44(%ebp),%edx
084179a2 +0x178:  mov    %edx,0x1c(%esp)
084179a6 +0x17c:  mov    -0x40(%ebp),%edx
084179a9 +0x17f:  mov    %edx,0x18(%esp)
084179ad +0x183:  mov    -0x3c(%ebp),%edx
084179b0 +0x186:  mov    %edx,0x14(%esp)
084179b4 +0x18a:  mov    %edi,0x10(%esp)
084179b8 +0x18e:  mov    %ebx,0xc(%esp)
084179bc +0x192:  mov    %eax,0x8(%esp)
084179c0 +0x196:  movl   $"upDate %s set remain_sp=%u,skill_slot='%s',remain_sp_2nd=%u, skill_slot_2nd='%s', remain_sfp_1st=%u, remain_sfp_2nd=%u, skill_command ='%s',script_version=%d where charac_no=%u",0x4(%esp)
084179c8 +0x19e:  mov    -0x1c(%ebp),%eax
084179cb +0x1a1:  mov    %eax,(%esp)
084179ce +0x1a4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084179d3 +0x1a9:  movl   $0x1,0x4(%esp)
084179db +0x1b1:  mov    -0x1c(%ebp),%eax
084179de +0x1b4:  mov    %eax,(%esp)
084179e1 +0x1b7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084179e6 +0x1bc:  mov    %al,-0x1d(%ebp)
084179e9 +0x1bf:  movzbl -0x1d(%ebp),%eax
084179ed +0x1c3:  xor    $0x1,%eax
084179f0 +0x1c6:  test   %al,%al
084179f2 +0x1c8:  je     084179fb <+0x1d1>
084179f4 +0x1ca:  mov    $0x0,%eax
084179f9 +0x1cf:  jmp    08417a00 <+0x1d6>
084179fb +0x1d1:  mov    $0x1,%eax
08417a00 +0x1d6:  add    $0x7c,%esp
08417a03 +0x1d9:  pop    %ebx
08417a04 +0x1da:  pop    %esi
08417a05 +0x1db:  pop    %edi
08417a06 +0x1dc:  pop    %ebp
08417a07 +0x1dd:  ret
```

## 反编译 C

```c
// DB_SaveSkill::SaveSkill @ 0x841782a

/* DB_SaveSkill::SaveSkill(SIG_LOAD_SKILL*) */

undefined4 __thiscall DB_SaveSkill::SaveSkill(DB_SaveSkill *this,SIG_LOAD_SKILL *param_1)

{
  SIG_LOAD_SKILL SVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *local_30;
  char *local_2c;
  char *local_28 [2];
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_28[0] = (char *)0x0;
  cVar9 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xc),0x198,local_28);
  if (cVar9 == '\x01') {
    local_2c = (char *)0x0;
    cVar9 = put_compressed_blob_data(local_20,1,(char *)(param_1 + 0x1a8),0x198,&local_2c);
    if (cVar9 == '\x01') {
      local_30 = (char *)0x0;
      cVar9 = put_compressed_blob_data(local_20,4,(char *)(param_1 + 0x348),200,&local_30);
      pcVar8 = local_28[0];
      pcVar7 = local_2c;
      pcVar6 = local_30;
      if (cVar9 == '\x01') {
        uVar10 = *(undefined4 *)param_1;
        SVar1 = param_1[0x411];
        uVar2 = *(undefined4 *)(param_1 + 0x344);
        uVar3 = *(undefined4 *)(param_1 + 0x340);
        uVar4 = *(undefined4 *)(param_1 + 0x1a4);
        uVar5 = *(undefined4 *)(param_1 + 8);
        uVar11 = get_skill_table_name((bool)param_1[0x410]);
        MySQL::set_query(local_20,
                         "upDate %s set remain_sp=%u,skill_slot=\'%s\',remain_sp_2nd=%u, skill_slot_2nd=\'%s\', remain_sfp_1st=%u, remain_sfp_2nd=%u, skill_command =\'%s\',script_version=%d where charac_no=%u"
                         ,uVar11,uVar5,pcVar8,uVar4,pcVar7,uVar3,uVar2,pcVar6,(uint)(byte)SVar1,
                         uVar10);
        cVar9 = MySQL::exec(local_20,true);
        if (cVar9 == '\x01') {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
        }
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}
```
