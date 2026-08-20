# ProcessUseLethe

`_ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD`

`DB_UpdateOneDayLetheSkill::ProcessUseLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateOneDayLetheSkill` | `0x084341fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084341fc  _ZN25DB_UpdateOneDayLetheSkill15ProcessUseLetheEP35SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD
#           DB_UpdateOneDayLetheSkill::ProcessUseLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*)
# range [0x084341fc, 0x0843433f]
084341fc +0x000:  push   %ebp
084341fd +0x001:  mov    %esp,%ebp
084341ff +0x003:  push   %edi
08434200 +0x004:  push   %esi
08434201 +0x005:  push   %ebx
08434202 +0x006:  sub    $0x3c,%esp
08434205 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843420a +0x00e:  movl   $0x0,0x8(%esp)
08434212 +0x016:  movl   $0x3,0x4(%esp)
0843421a +0x01e:  mov    %eax,(%esp)
0843421d +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08434222 +0x026:  mov    %eax,-0x1c(%ebp)
08434225 +0x029:  movl   $0x0,-0x20(%ebp)
0843422c +0x030:  mov    0xc(%ebp),%eax
0843422f +0x033:  add    $0xd,%eax
08434232 +0x036:  lea    -0x20(%ebp),%edx
08434235 +0x039:  mov    %edx,0x10(%esp)
08434239 +0x03d:  movl   $0x198,0xc(%esp)
08434241 +0x045:  mov    %eax,0x8(%esp)
08434245 +0x049:  movl   $0x0,0x4(%esp)
0843424d +0x051:  mov    -0x1c(%ebp),%eax
08434250 +0x054:  mov    %eax,(%esp)
08434253 +0x057:  call   083fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>  ; put_compressed_blob_data(MySQL*, int, char*, int, char**)
08434258 +0x05c:  xor    $0x1,%eax
0843425b +0x05f:  test   %al,%al
0843425d +0x061:  je     08434269 <+0x6d>
0843425f +0x063:  mov    $0x0,%eax
08434264 +0x068:  jmp    08434337 <+0x13b>
08434269 +0x06d:  mov    0xc(%ebp),%eax
0843426c +0x070:  movzbl 0x1a6(%eax),%eax
08434273 +0x077:  cmp    $0xff,%al
08434275 +0x079:  je     08434285 <+0x89>
08434277 +0x07b:  mov    0xc(%ebp),%eax
0843427a +0x07e:  movzbl 0x1a6(%eax),%eax
08434281 +0x085:  test   %al,%al
08434283 +0x087:  jne    084342cc <+0xd0>
08434285 +0x089:  mov    0xc(%ebp),%eax
08434288 +0x08c:  mov    0x4(%eax),%edi
0843428b +0x08f:  mov    0xc(%ebp),%eax
0843428e +0x092:  movzbl 0x1a5(%eax),%eax
08434295 +0x099:  movzbl %al,%esi
08434298 +0x09c:  mov    -0x20(%ebp),%ebx
0843429b +0x09f:  movl   $0x0,(%esp)
084342a2 +0x0a6:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
084342a7 +0x0ab:  mov    %edi,0x14(%esp)
084342ab +0x0af:  mov    %esi,0x10(%esp)
084342af +0x0b3:  mov    %ebx,0xc(%esp)
084342b3 +0x0b7:  mov    %eax,0x8(%esp)
084342b7 +0x0bb:  movl   $"upDate %s set skill_slot_lethe='%s', lethe_flag=%u where charac_no=%u",0x4(%esp)
084342bf +0x0c3:  mov    -0x1c(%ebp),%eax
084342c2 +0x0c6:  mov    %eax,(%esp)
084342c5 +0x0c9:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084342ca +0x0ce:  jmp    08434311 <+0x115>
084342cc +0x0d0:  mov    0xc(%ebp),%eax
084342cf +0x0d3:  mov    0x4(%eax),%edi
084342d2 +0x0d6:  mov    0xc(%ebp),%eax
084342d5 +0x0d9:  movzbl 0x1a5(%eax),%eax
084342dc +0x0e0:  movzbl %al,%esi
084342df +0x0e3:  mov    -0x20(%ebp),%ebx
084342e2 +0x0e6:  movl   $0x0,(%esp)
084342e9 +0x0ed:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
084342ee +0x0f2:  mov    %edi,0x14(%esp)
084342f2 +0x0f6:  mov    %esi,0x10(%esp)
084342f6 +0x0fa:  mov    %ebx,0xc(%esp)
084342fa +0x0fe:  mov    %eax,0x8(%esp)
084342fe +0x102:  movl   $"upDate %s set skill_slot_lethe_2nd='%s', lethe_flag_2nd=%u where charac_no=%u",0x4(%esp)
08434306 +0x10a:  mov    -0x1c(%ebp),%eax
08434309 +0x10d:  mov    %eax,(%esp)
0843430c +0x110:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08434311 +0x115:  movl   $0x1,0x4(%esp)
08434319 +0x11d:  mov    -0x1c(%ebp),%eax
0843431c +0x120:  mov    %eax,(%esp)
0843431f +0x123:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08434324 +0x128:  xor    $0x1,%eax
08434327 +0x12b:  test   %al,%al
08434329 +0x12d:  je     08434332 <+0x136>
0843432b +0x12f:  mov    $0x0,%eax
08434330 +0x134:  jmp    08434337 <+0x13b>
08434332 +0x136:  mov    $0x1,%eax
08434337 +0x13b:  add    $0x3c,%esp
0843433a +0x13e:  pop    %ebx
0843433b +0x13f:  pop    %esi
0843433c +0x140:  pop    %edi
0843433d +0x141:  pop    %ebp
0843433e +0x142:  ret
0843433f +0x143:  nop
```

## 反编译 C

```c
// DB_UpdateOneDayLetheSkill::ProcessUseLethe @ 0x84341fc

/* DB_UpdateOneDayLetheSkill::ProcessUseLethe(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD*) */

undefined4 __thiscall
DB_UpdateOneDayLetheSkill::ProcessUseLethe
          (DB_UpdateOneDayLetheSkill *this,SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *param_1)

{
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD SVar1;
  char *pcVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_24 = (char *)0x0;
  cVar3 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xd),0x198,&local_24);
  pcVar2 = local_24;
  if (cVar3 == '\x01') {
    if ((param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0xff) ||
       (param_1[0x1a6] == (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0)) {
      uVar4 = *(undefined4 *)(param_1 + 4);
      SVar1 = param_1[0x1a5];
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe=\'%s\', lethe_flag=%u where charac_no=%u",
                       uVar5,pcVar2,(uint)(byte)SVar1,uVar4);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 4);
      SVar1 = param_1[0x1a5];
      uVar5 = get_skill_table_name(false);
      MySQL::set_query(local_20,
                       "upDate %s set skill_slot_lethe_2nd=\'%s\', lethe_flag_2nd=%u where charac_no=%u"
                       ,uVar5,pcVar2,(uint)(byte)SVar1,uVar4);
    }
    cVar3 = MySQL::exec(local_20,true);
    if (cVar3 == '\x01') {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}
```
