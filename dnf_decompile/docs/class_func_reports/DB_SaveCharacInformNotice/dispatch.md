# dispatch

`_ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream`

`DB_SaveCharacInformNotice::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveCharacInformNotice` | `0x0844c170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844c170  _ZN25DB_SaveCharacInformNotice8dispatchEiiP6Stream
#           DB_SaveCharacInformNotice::dispatch(int, int, Stream*)
# range [0x0844c170, 0x0844c303]
0844c170 +0x000:  push   %ebp
0844c171 +0x001:  mov    %esp,%ebp
0844c173 +0x003:  push   %edi
0844c174 +0x004:  push   %ebx
0844c175 +0x005:  sub    $0x130,%esp
0844c17b +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844c180 +0x010:  movl   $0x0,0x8(%esp)
0844c188 +0x018:  movl   $0x2,0x4(%esp)
0844c190 +0x020:  mov    %eax,(%esp)
0844c193 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844c198 +0x028:  mov    %eax,-0x14(%ebp)
0844c19b +0x02b:  mov    0x14(%ebp),%eax
0844c19e +0x02e:  mov    %eax,(%esp)
0844c1a1 +0x031:  call   08454876 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x748c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x748c
0844c1a6 +0x036:  mov    %eax,-0x10(%ebp)
0844c1a9 +0x039:  cmpl   $0x0,-0x10(%ebp)
0844c1ad +0x03d:  jne    0844c1b9 <+0x49>
0844c1af +0x03f:  mov    $0x0,%eax
0844c1b4 +0x044:  jmp    0844c2fa <+0x18a>
0844c1b9 +0x049:  lea    -0x115(%ebp),%edx
0844c1bf +0x04f:  mov    $0x101,%ebx
0844c1c4 +0x054:  mov    $0x0,%eax
0844c1c9 +0x059:  mov    %edx,%ecx
0844c1cb +0x05b:  and    $0x1,%ecx
0844c1ce +0x05e:  test   %ecx,%ecx
0844c1d0 +0x060:  je     0844c1da <+0x6a>
0844c1d2 +0x062:  mov    %al,(%edx)
0844c1d4 +0x064:  add    $0x1,%edx
0844c1d7 +0x067:  sub    $0x1,%ebx
0844c1da +0x06a:  mov    %edx,%ecx
0844c1dc +0x06c:  and    $0x2,%ecx
0844c1df +0x06f:  test   %ecx,%ecx
0844c1e1 +0x071:  je     0844c1ec <+0x7c>
0844c1e3 +0x073:  mov    %ax,(%edx)
0844c1e6 +0x076:  add    $0x2,%edx
0844c1e9 +0x079:  sub    $0x2,%ebx
0844c1ec +0x07c:  mov    %ebx,%ecx
0844c1ee +0x07e:  shr    $0x2,%ecx
0844c1f1 +0x081:  mov    %edx,%edi
0844c1f3 +0x083:  rep stos %eax,%es:(%edi)
0844c1f5 +0x085:  mov    %edi,%edx
0844c1f7 +0x087:  mov    %ebx,%ecx
0844c1f9 +0x089:  and    $0x2,%ecx
0844c1fc +0x08c:  test   %ecx,%ecx
0844c1fe +0x08e:  je     0844c206 <+0x96>
0844c200 +0x090:  mov    %ax,(%edx)
0844c203 +0x093:  add    $0x2,%edx
0844c206 +0x096:  mov    %ebx,%ecx
0844c208 +0x098:  and    $0x1,%ecx
0844c20b +0x09b:  test   %ecx,%ecx
0844c20d +0x09d:  je     0844c214 <+0xa4>
0844c20f +0x09f:  mov    %al,(%edx)
0844c211 +0x0a1:  add    $0x1,%edx
0844c214 +0x0a4:  mov    -0x10(%ebp),%eax
0844c217 +0x0a7:  add    $0x4,%eax
0844c21a +0x0aa:  mov    %eax,0x8(%esp)
0844c21e +0x0ae:  lea    -0x115(%ebp),%eax
0844c224 +0x0b4:  mov    %eax,0x4(%esp)
0844c228 +0x0b8:  mov    -0x14(%ebp),%eax
0844c22b +0x0bb:  mov    %eax,(%esp)
0844c22e +0x0be:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
0844c233 +0x0c3:  mov    -0x10(%ebp),%eax
0844c236 +0x0c6:  mov    (%eax),%eax
0844c238 +0x0c8:  mov    %eax,0xc(%esp)
0844c23c +0x0cc:  lea    -0x115(%ebp),%eax
0844c242 +0x0d2:  mov    %eax,0x8(%esp)
0844c246 +0x0d6:  movl   $"upDate charac_option set charac_inform_notice='%s' where charac_no=%u",0x4(%esp)
0844c24e +0x0de:  mov    -0x14(%ebp),%eax
0844c251 +0x0e1:  mov    %eax,(%esp)
0844c254 +0x0e4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c259 +0x0e9:  movl   $0x1,0x4(%esp)
0844c261 +0x0f1:  mov    -0x14(%ebp),%eax
0844c264 +0x0f4:  mov    %eax,(%esp)
0844c267 +0x0f7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c26c +0x0fc:  mov    %al,-0x9(%ebp)
0844c26f +0x0ff:  movzbl -0x9(%ebp),%eax
0844c273 +0x103:  xor    $0x1,%eax
0844c276 +0x106:  test   %al,%al
0844c278 +0x108:  je     0844c281 <+0x111>
0844c27a +0x10a:  mov    $0x0,%eax
0844c27f +0x10f:  jmp    0844c2fa <+0x18a>
0844c281 +0x111:  mov    -0x14(%ebp),%eax
0844c284 +0x114:  mov    %eax,(%esp)
0844c287 +0x117:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0844c28c +0x11c:  or     %edx,%eax
0844c28e +0x11e:  test   %eax,%eax
0844c290 +0x120:  sete   %al
0844c293 +0x123:  test   %al,%al
0844c295 +0x125:  je     0844c2f5 <+0x185>
0844c297 +0x127:  mov    -0x10(%ebp),%eax
0844c29a +0x12a:  mov    (%eax),%eax
0844c29c +0x12c:  lea    -0x115(%ebp),%edx
0844c2a2 +0x132:  mov    %edx,0x14(%esp)
0844c2a6 +0x136:  movl   $"",0x10(%esp)
0844c2ae +0x13e:  movl   $"",0xc(%esp)
0844c2b6 +0x146:  mov    %eax,0x8(%esp)
0844c2ba +0x14a:  movl   $"inSert into charac_option(charac_no, options, best_clear_time, blue_marble_enter_count, charac_inform_notice) values (%u, '%s', '%s', 0, '%s')",0x4(%esp)
0844c2c2 +0x152:  mov    -0x14(%ebp),%eax
0844c2c5 +0x155:  mov    %eax,(%esp)
0844c2c8 +0x158:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844c2cd +0x15d:  movl   $0x1,0x4(%esp)
0844c2d5 +0x165:  mov    -0x14(%ebp),%eax
0844c2d8 +0x168:  mov    %eax,(%esp)
0844c2db +0x16b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844c2e0 +0x170:  mov    %al,-0x9(%ebp)
0844c2e3 +0x173:  movzbl -0x9(%ebp),%eax
0844c2e7 +0x177:  xor    $0x1,%eax
0844c2ea +0x17a:  test   %al,%al
0844c2ec +0x17c:  je     0844c2f5 <+0x185>
0844c2ee +0x17e:  mov    $0x0,%eax
0844c2f3 +0x183:  jmp    0844c2fa <+0x18a>
0844c2f5 +0x185:  mov    $0x1,%eax
0844c2fa +0x18a:  add    $0x130,%esp
0844c300 +0x190:  pop    %ebx
0844c301 +0x191:  pop    %edi
0844c302 +0x192:  pop    %ebp
0844c303 +0x193:  ret
```

## 反编译 C

```c
// DB_SaveCharacInformNotice::dispatch @ 0x844c170

/* DB_SaveCharacInformNotice::dispatch(int, int, Stream*) */

undefined4 DB_SaveCharacInformNotice::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  char local_119;
  char local_118 [256];
  MySQL *local_18;
  SIG_SAVE_CHARAC_INFORM_NOTICE *local_14;
  char local_d;
  
  bVar7 = 0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_14 = Stream::GetOutBuffer<SIG_SAVE_CHARAC_INFORM_NOTICE>(in_stack_00000010);
  if (local_14 == (SIG_SAVE_CHARAC_INFORM_NOTICE *)0x0) {
    uVar2 = 0;
  }
  else {
    pcVar4 = &local_119;
    uVar5 = 0x101;
    bVar6 = ((uint)pcVar4 & 1) != 0;
    if (bVar6) {
      local_119 = '\0';
      pcVar4 = local_118;
      uVar5 = 0x100;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar5 = uVar5 - 2;
    }
    for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
    }
    if ((uVar5 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar6) {
      *pcVar4 = '\0';
    }
    MySQL::escape_string(local_18,&local_119,(char *)(local_14 + 4));
    MySQL::set_query(local_18,
                     "upDate charac_option set charac_inform_notice=\'%s\' where charac_no=%u",
                     &local_119,*(undefined4 *)local_14);
    local_d = MySQL::exec(local_18,true);
    if (local_d == '\x01') {
      lVar8 = MySQL::getAffectedRowCount(local_18);
      if (lVar8 == 0) {
        MySQL::set_query(local_18,
                         "inSert into charac_option(charac_no, options, best_clear_time, blue_marble_enter_count, charac_inform_notice) values (%u, \'%s\', \'%s\', 0, \'%s\')"
                         ,*(undefined4 *)local_14,&DAT_08c598ba,&DAT_08c598ba,&local_119);
        cVar1 = MySQL::exec(local_18,true);
        if (cVar1 != '\x01') {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
