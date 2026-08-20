# dispatch

`_ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream`

`DB_UpdatePvPGrade::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdatePvPGrade` | `0x08428b26` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08428b26  _ZN17DB_UpdatePvPGrade8dispatchEiiP6Stream
#           DB_UpdatePvPGrade::dispatch(int, int, Stream*)
# range [0x08428b26, 0x0842939f]
08428b26 +0x000:  push   %ebp
08428b27 +0x001:  mov    %esp,%ebp
08428b29 +0x003:  push   %edi
08428b2a +0x004:  push   %esi
08428b2b +0x005:  push   %ebx
08428b2c +0x006:  sub    $0x614c,%esp
08428b32 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08428b37 +0x011:  movl   $0x0,0x8(%esp)
08428b3f +0x019:  movl   $0x2,0x4(%esp)
08428b47 +0x021:  mov    %eax,(%esp)
08428b4a +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08428b4f +0x029:  mov    %eax,-0x50(%ebp)
08428b52 +0x02c:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428b57 +0x031:  mov    %eax,(%esp)
08428b5a +0x034:  call   0844d568 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x17e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x17e
08428b5f +0x039:  mov    %eax,0x8(%esp)
08428b63 +0x03d:  movl   $"seLect charac_no,pvp_grade,pvp_point,unix_timestamp(last_play_time) from pvp_grade_expand where pvp_grade>=%d order by pvp_point desc limit 1500",0x4(%esp)
08428b6b +0x045:  mov    -0x50(%ebp),%eax
08428b6e +0x048:  mov    %eax,(%esp)
08428b71 +0x04b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08428b76 +0x050:  movl   $0x1,0x4(%esp)
08428b7e +0x058:  mov    -0x50(%ebp),%eax
08428b81 +0x05b:  mov    %eax,(%esp)
08428b84 +0x05e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08428b89 +0x063:  xor    $0x1,%eax
08428b8c +0x066:  test   %al,%al
08428b8e +0x068:  jne    08428b9f <+0x79>
08428b90 +0x06a:  mov    -0x50(%ebp),%eax
08428b93 +0x06d:  mov    %eax,(%esp)
08428b96 +0x070:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08428b9b +0x075:  test   %eax,%eax
08428b9d +0x077:  jne    08428ba6 <+0x80>
08428b9f +0x079:  mov    $0x1,%eax
08428ba4 +0x07e:  jmp    08428bab <+0x85>
08428ba6 +0x080:  mov    $0x0,%eax
08428bab +0x085:  test   %al,%al
08428bad +0x087:  je     08428bb9 <+0x93>
08428baf +0x089:  mov    $0x0,%ebx
08428bb4 +0x08e:  jmp    08429392 <+0x86c>
08428bb9 +0x093:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08428bc0 +0x09a:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08428bc5 +0x09f:  mov    %eax,-0x6c(%ebp)
08428bc8 +0x0a2:  lea    -0xe4(%ebp),%eax
08428bce +0x0a8:  mov    %eax,0x4(%esp)
08428bd2 +0x0ac:  lea    -0x6c(%ebp),%eax
08428bd5 +0x0af:  mov    %eax,(%esp)
08428bd8 +0x0b2:  call   0807e360 <_init+0xc58>
08428bdd +0x0b7:  movl   $0x1,-0xdc(%ebp)
08428be7 +0x0c1:  movl   $0x0,-0xe0(%ebp)
08428bf1 +0x0cb:  movl   $0x0,-0xe4(%ebp)
08428bfb +0x0d5:  lea    -0xe4(%ebp),%eax
08428c01 +0x0db:  mov    %eax,(%esp)
08428c04 +0x0de:  call   0807e820 <_init+0x1118>
08428c09 +0x0e3:  mov    %eax,-0x6c(%ebp)
08428c0c +0x0e6:  mov    -0x6c(%ebp),%eax
08428c0f +0x0e9:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
08428c14 +0x0ee:  mov    %eax,-0x4c(%ebp)
08428c17 +0x0f1:  lea    -0x78(%ebp),%eax
08428c1a +0x0f4:  mov    %eax,(%esp)
08428c1d +0x0f7:  call   084522a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4eba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4eba
08428c22 +0x0fc:  lea    -0x90(%ebp),%ebx
08428c28 +0x102:  mov    %ebx,%edi
08428c2a +0x104:  mov    $0x1,%esi
08428c2f +0x109:  jmp    08428c3f <+0x119>
08428c31 +0x10b:  mov    %edi,(%esp)
08428c34 +0x10e:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08428c39 +0x113:  add    $0xc,%edi
08428c3c +0x116:  sub    $0x1,%esi
08428c3f +0x119:  cmp    $0xffffffff,%esi
08428c42 +0x11c:  setne  %al
08428c45 +0x11f:  test   %al,%al
08428c47 +0x121:  jne    08428c31 <+0x10b>
08428c49 +0x123:  jmp    08428c8a <+0x164>
08428c4b +0x125:  mov    %edx,%edi
08428c4d +0x127:  mov    %eax,-0x6130(%ebp)
08428c53 +0x12d:  test   %ebx,%ebx
08428c55 +0x12f:  je     08428c7d <+0x157>
08428c57 +0x131:  mov    $0x1,%eax
08428c5c +0x136:  sub    %esi,%eax
08428c5e +0x138:  mov    %eax,%edx
08428c60 +0x13a:  mov    %edx,%eax
08428c62 +0x13c:  add    %eax,%eax
08428c64 +0x13e:  add    %edx,%eax
08428c66 +0x140:  shl    $0x2,%eax
08428c69 +0x143:  lea    (%ebx,%eax,1),%esi
08428c6c +0x146:  cmp    %ebx,%esi
08428c6e +0x148:  je     08428c7d <+0x157>
08428c70 +0x14a:  sub    $0xc,%esi
08428c73 +0x14d:  mov    %esi,(%esp)
08428c76 +0x150:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08428c7b +0x155:  jmp    08428c6c <+0x146>
08428c7d +0x157:  mov    -0x6130(%ebp),%eax
08428c83 +0x15d:  mov    %edi,%edx
08428c85 +0x15f:  jmp    0842936c <+0x846>
08428c8a +0x164:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428c8f +0x169:  mov    %eax,(%esp)
08428c92 +0x16c:  call   0844d54c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x162>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x162
08428c97 +0x171:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%edx
08428c9d +0x177:  mov    %eax,0x4(%esp)
08428ca1 +0x17b:  mov    %edx,(%esp)
08428ca4 +0x17e:  call   085d4832 <_ZNK11RefPvpGrade11GetPvpPointEi>  ; RefPvpGrade::GetPvpPoint(int) const
08428ca9 +0x183:  mov    %eax,-0x94(%ebp)
08428caf +0x189:  movl   $0x0,-0x30(%ebp)
08428cb6 +0x190:  jmp    08428e92 <+0x36c>
08428cbb +0x195:  mov    -0x50(%ebp),%eax
08428cbe +0x198:  mov    %eax,(%esp)
08428cc1 +0x19b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08428cc6 +0x1a0:  xor    $0x1,%eax
08428cc9 +0x1a3:  test   %al,%al
08428ccb +0x1a5:  je     08428cd7 <+0x1b1>
08428ccd +0x1a7:  mov    $0x0,%ebx
08428cd2 +0x1ac:  jmp    0842934c <+0x826>
08428cd7 +0x1b1:  lea    -0xb8(%ebp),%eax
08428cdd +0x1b7:  mov    %eax,0x8(%esp)
08428ce1 +0x1bb:  movl   $0x0,0x4(%esp)
08428ce9 +0x1c3:  mov    -0x50(%ebp),%eax
08428cec +0x1c6:  mov    %eax,(%esp)
08428cef +0x1c9:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08428cf4 +0x1ce:  xor    $0x1,%eax
08428cf7 +0x1d1:  test   %al,%al
08428cf9 +0x1d3:  je     08428d05 <+0x1df>
08428cfb +0x1d5:  mov    $0x0,%ebx
08428d00 +0x1da:  jmp    0842934c <+0x826>
08428d05 +0x1df:  lea    -0xb8(%ebp),%eax
08428d0b +0x1e5:  add    $0x4,%eax
08428d0e +0x1e8:  mov    %eax,0x8(%esp)
08428d12 +0x1ec:  movl   $0x1,0x4(%esp)
08428d1a +0x1f4:  mov    -0x50(%ebp),%eax
08428d1d +0x1f7:  mov    %eax,(%esp)
08428d20 +0x1fa:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08428d25 +0x1ff:  xor    $0x1,%eax
08428d28 +0x202:  test   %al,%al
08428d2a +0x204:  je     08428d36 <+0x210>
08428d2c +0x206:  mov    $0x0,%ebx
08428d31 +0x20b:  jmp    0842934c <+0x826>
08428d36 +0x210:  lea    -0xb8(%ebp),%eax
08428d3c +0x216:  add    $0x8,%eax
08428d3f +0x219:  mov    %eax,0x8(%esp)
08428d43 +0x21d:  movl   $0x2,0x4(%esp)
08428d4b +0x225:  mov    -0x50(%ebp),%eax
08428d4e +0x228:  mov    %eax,(%esp)
08428d51 +0x22b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08428d56 +0x230:  xor    $0x1,%eax
08428d59 +0x233:  test   %al,%al
08428d5b +0x235:  je     08428d67 <+0x241>
08428d5d +0x237:  mov    $0x0,%ebx
08428d62 +0x23c:  jmp    0842934c <+0x826>
08428d67 +0x241:  lea    -0xb8(%ebp),%eax
08428d6d +0x247:  add    $0xc,%eax
08428d70 +0x24a:  mov    %eax,0x8(%esp)
08428d74 +0x24e:  movl   $0x3,0x4(%esp)
08428d7c +0x256:  mov    -0x50(%ebp),%eax
08428d7f +0x259:  mov    %eax,(%esp)
08428d82 +0x25c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08428d87 +0x261:  xor    $0x1,%eax
08428d8a +0x264:  test   %al,%al
08428d8c +0x266:  je     08428d98 <+0x272>
08428d8e +0x268:  mov    $0x0,%ebx
08428d93 +0x26d:  jmp    0842934c <+0x826>
08428d98 +0x272:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428d9d +0x277:  mov    %eax,(%esp)
08428da0 +0x27a:  call   0844d54c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x162>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x162
08428da5 +0x27f:  mov    -0xb4(%ebp),%edx
08428dab +0x285:  cmp    %edx,%eax
08428dad +0x287:  setle  %al
08428db0 +0x28a:  test   %al,%al
08428db2 +0x28c:  je     08428e79 <+0x353>
08428db8 +0x292:  mov    -0xac(%ebp),%eax
08428dbe +0x298:  cmp    -0x4c(%ebp),%eax
08428dc1 +0x29b:  jg     08428e79 <+0x353>
08428dc7 +0x2a1:  mov    -0xb0(%ebp),%edx
08428dcd +0x2a7:  mov    -0x94(%ebp),%eax
08428dd3 +0x2ad:  cmp    %eax,%edx
08428dd5 +0x2af:  jle    08428e79 <+0x353>
08428ddb +0x2b5:  mov    -0xb0(%ebp),%ebx
08428de1 +0x2bb:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428de6 +0x2c0:  mov    %eax,(%esp)
08428de9 +0x2c3:  call   0844d55a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x170
08428dee +0x2c8:  mov    -0x94(%ebp),%edx
08428df4 +0x2ce:  add    %edx,%eax
08428df6 +0x2d0:  cmp    %eax,%ebx
08428df8 +0x2d2:  setg   %al
08428dfb +0x2d5:  test   %al,%al
08428dfd +0x2d7:  je     08428e1f <+0x2f9>
08428dff +0x2d9:  mov    -0xb8(%ebp),%eax
08428e05 +0x2df:  mov    %eax,-0x68(%ebp)
08428e08 +0x2e2:  lea    -0x68(%ebp),%eax
08428e0b +0x2e5:  mov    %eax,0x4(%esp)
08428e0f +0x2e9:  lea    -0x90(%ebp),%eax
08428e15 +0x2ef:  mov    %eax,(%esp)
08428e18 +0x2f2:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08428e1d +0x2f7:  jmp    08428e40 <+0x31a>
08428e1f +0x2f9:  mov    -0xb8(%ebp),%eax
08428e25 +0x2ff:  mov    %eax,-0x64(%ebp)
08428e28 +0x302:  lea    -0x64(%ebp),%eax
08428e2b +0x305:  mov    %eax,0x4(%esp)
08428e2f +0x309:  lea    -0x90(%ebp),%eax
08428e35 +0x30f:  add    $0xc,%eax
08428e38 +0x312:  mov    %eax,(%esp)
08428e3b +0x315:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
08428e40 +0x31a:  mov    -0xb0(%ebp),%ebx
08428e46 +0x320:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428e4b +0x325:  mov    %eax,(%esp)
08428e4e +0x328:  call   0844d55a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x170
08428e53 +0x32d:  mov    %ebx,%edx
08428e55 +0x32f:  sub    %eax,%edx
08428e57 +0x331:  mov    %edx,%eax
08428e59 +0x333:  mov    %eax,-0x60(%ebp)
08428e5c +0x336:  lea    -0x60(%ebp),%eax
08428e5f +0x339:  mov    %eax,0x4(%esp)
08428e63 +0x33d:  lea    -0x94(%ebp),%eax
08428e69 +0x343:  mov    %eax,(%esp)
08428e6c +0x346:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08428e71 +0x34b:  mov    (%eax),%eax
08428e73 +0x34d:  mov    %eax,-0xb0(%ebp)
08428e79 +0x353:  lea    -0xb8(%ebp),%eax
08428e7f +0x359:  mov    %eax,0x4(%esp)
08428e83 +0x35d:  lea    -0x78(%ebp),%eax
08428e86 +0x360:  mov    %eax,(%esp)
08428e89 +0x363:  call   08452316 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4f2c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4f2c
08428e8e +0x368:  addl   $0x1,-0x30(%ebp)
08428e92 +0x36c:  mov    -0x50(%ebp),%eax
08428e95 +0x36f:  mov    %eax,(%esp)
08428e98 +0x372:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08428e9d +0x377:  cmp    -0x30(%ebp),%eax
08428ea0 +0x37a:  seta   %al
08428ea3 +0x37d:  test   %al,%al
08428ea5 +0x37f:  jne    08428cbb <+0x195>
08428eab +0x385:  lea    -0x78(%ebp),%eax
08428eae +0x388:  mov    %eax,(%esp)
08428eb1 +0x38b:  call   0845238a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4fa0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4fa0
08428eb6 +0x390:  mov    %eax,-0x48(%ebp)
08428eb9 +0x393:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08428ebe +0x398:  mov    %eax,(%esp)
08428ec1 +0x39b:  call   0844d576 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x18c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x18c
08428ec6 +0x3a0:  mov    %eax,-0x44(%ebp)
08428ec9 +0x3a3:  movl   $0x4,-0x40(%ebp)
08428ed0 +0x3aa:  movl   $0x0,-0xa8(%ebp)
08428eda +0x3b4:  movl   $0x0,-0xa4(%ebp)
08428ee4 +0x3be:  movl   $0x0,-0xa0(%ebp)
08428eee +0x3c8:  movl   $0x0,-0x9c(%ebp)
08428ef8 +0x3d2:  movl   $0x0,-0x98(%ebp)
08428f02 +0x3dc:  movl   $0x0,-0x2c(%ebp)
08428f09 +0x3e3:  jmp    08428f4e <+0x428>
08428f0b +0x3e5:  mov    -0x2c(%ebp),%ebx
08428f0e +0x3e8:  mov    -0x2c(%ebp),%eax
08428f11 +0x3eb:  mov    %eax,0x4(%esp)
08428f15 +0x3ef:  mov    -0x44(%ebp),%eax
08428f18 +0x3f2:  mov    %eax,(%esp)
08428f1b +0x3f5:  call   080ea574 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x1ad>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x1ad
08428f20 +0x3fa:  mov    (%eax),%eax
08428f22 +0x3fc:  imul   -0x48(%ebp),%eax
08428f26 +0x400:  lea    0x1f4(%eax),%ecx
08428f2c +0x406:  mov    $0x10624dd3,%edx
08428f31 +0x40b:  mov    %ecx,%eax
08428f33 +0x40d:  imul   %edx
08428f35 +0x40f:  sar    $0x6,%edx
08428f38 +0x412:  mov    %ecx,%eax
08428f3a +0x414:  sar    $0x1f,%eax
08428f3d +0x417:  mov    %edx,%ecx
08428f3f +0x419:  sub    %eax,%ecx
08428f41 +0x41b:  mov    %ecx,%eax
08428f43 +0x41d:  mov    %eax,-0xa8(%ebp,%ebx,4)
08428f4a +0x424:  addl   $0x1,-0x2c(%ebp)
08428f4e +0x428:  cmpl   $0x4,-0x2c(%ebp)
08428f52 +0x42c:  setle  %al
08428f55 +0x42f:  test   %al,%al
08428f57 +0x431:  jne    08428f0b <+0x3e5>
08428f59 +0x433:  movl   $0x1,-0x28(%ebp)
08428f60 +0x43a:  jmp    08428fbc <+0x496>
08428f62 +0x43c:  mov    -0x28(%ebp),%eax
08428f65 +0x43f:  sub    $0x1,%eax
08428f68 +0x442:  mov    -0xa8(%ebp,%eax,4),%eax
08428f6f +0x449:  test   %eax,%eax
08428f71 +0x44b:  jle    08428fb8 <+0x492>
08428f73 +0x44d:  mov    -0x28(%ebp),%ebx
08428f76 +0x450:  mov    -0x28(%ebp),%eax
08428f79 +0x453:  mov    -0xa8(%ebp,%eax,4),%edx
08428f80 +0x45a:  mov    -0x28(%ebp),%eax
08428f83 +0x45d:  sub    $0x1,%eax
08428f86 +0x460:  mov    -0xa8(%ebp,%eax,4),%eax
08428f8d +0x467:  mov    %edx,%ecx
08428f8f +0x469:  sub    %eax,%ecx
08428f91 +0x46b:  mov    %ecx,%eax
08428f93 +0x46d:  mov    %eax,-0x5c(%ebp)
08428f96 +0x470:  movl   $0x1,-0x58(%ebp)
08428f9d +0x477:  lea    -0x5c(%ebp),%eax
08428fa0 +0x47a:  mov    %eax,0x4(%esp)
08428fa4 +0x47e:  lea    -0x58(%ebp),%eax
08428fa7 +0x481:  mov    %eax,(%esp)
08428faa +0x484:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08428faf +0x489:  mov    (%eax),%eax
08428fb1 +0x48b:  mov    %eax,-0xa8(%ebp,%ebx,4)
08428fb8 +0x492:  addl   $0x1,-0x28(%ebp)
08428fbc +0x496:  cmpl   $0x4,-0x28(%ebp)
08428fc0 +0x49a:  setle  %al
08428fc3 +0x49d:  test   %al,%al
08428fc5 +0x49f:  jne    08428f62 <+0x43c>
08428fc7 +0x4a1:  cmpl   $0x0,-0x48(%ebp)
08428fcb +0x4a5:  je     08428fe1 <+0x4bb>
08428fcd +0x4a7:  mov    -0x9c(%ebp),%eax
08428fd3 +0x4ad:  test   %eax,%eax
08428fd5 +0x4af:  jne    08428fe1 <+0x4bb>
08428fd7 +0x4b1:  movl   $0x1,-0x98(%ebp)
08428fe1 +0x4bb:  lea    -0x6120(%ebp),%eax
08428fe7 +0x4c1:  mov    $0x6000,%edx
08428fec +0x4c6:  mov    %edx,0x8(%esp)
08428ff0 +0x4ca:  movl   $0x0,0x4(%esp)
08428ff8 +0x4d2:  mov    %eax,(%esp)
08428ffb +0x4d5:  call   0807dcc0 <_init+0x5b8>
08429000 +0x4da:  lea    -0x90(%ebp),%eax
08429006 +0x4e0:  mov    %eax,(%esp)
08429009 +0x4e3:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0842900e +0x4e8:  xor    $0x1,%eax
08429011 +0x4eb:  test   %al,%al
08429013 +0x4ed:  je     0842907b <+0x555>
08429015 +0x4ef:  lea    -0x6120(%ebp),%eax
0842901b +0x4f5:  mov    %eax,0x4(%esp)
0842901f +0x4f9:  lea    -0x90(%ebp),%eax
08429025 +0x4ff:  mov    %eax,(%esp)
08429028 +0x502:  call   083ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>  ; getList2inQuery(std::vector<int, std::allocator<int> > const&, char*)
0842902d +0x507:  mov    %eax,%ebx
0842902f +0x509:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%eax
08429034 +0x50e:  mov    %eax,(%esp)
08429037 +0x511:  call   0844d55a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x170>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x170
0842903c +0x516:  mov    %ebx,0xc(%esp)
08429040 +0x51a:  mov    %eax,0x8(%esp)
08429044 +0x51e:  movl   $"upDate pvp_result set pvp_point=pvp_point-%d where charac_no %s",0x4(%esp)
0842904c +0x526:  mov    -0x50(%ebp),%eax
0842904f +0x529:  mov    %eax,(%esp)
08429052 +0x52c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08429057 +0x531:  movl   $0x1,0x4(%esp)
0842905f +0x539:  mov    -0x50(%ebp),%eax
08429062 +0x53c:  mov    %eax,(%esp)
08429065 +0x53f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842906a +0x544:  xor    $0x1,%eax
0842906d +0x547:  test   %al,%al
0842906f +0x549:  je     0842907b <+0x555>
08429071 +0x54b:  mov    $0x0,%ebx
08429076 +0x550:  jmp    0842934c <+0x826>
0842907b +0x555:  lea    -0x90(%ebp),%eax
08429081 +0x55b:  add    $0xc,%eax
08429084 +0x55e:  mov    %eax,(%esp)
08429087 +0x561:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
0842908c +0x566:  xor    $0x1,%eax
0842908f +0x569:  test   %al,%al
08429091 +0x56b:  je     084290f3 <+0x5cd>
08429093 +0x56d:  lea    -0x6120(%ebp),%eax
08429099 +0x573:  mov    %eax,0x4(%esp)
0842909d +0x577:  lea    -0x90(%ebp),%eax
084290a3 +0x57d:  add    $0xc,%eax
084290a6 +0x580:  mov    %eax,(%esp)
084290a9 +0x583:  call   083ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>  ; getList2inQuery(std::vector<int, std::allocator<int> > const&, char*)
084290ae +0x588:  mov    -0x94(%ebp),%edx
084290b4 +0x58e:  mov    %eax,0xc(%esp)
084290b8 +0x592:  mov    %edx,0x8(%esp)
084290bc +0x596:  movl   $"upDate pvp_result set pvp_point=%d where charac_no %s",0x4(%esp)
084290c4 +0x59e:  mov    -0x50(%ebp),%eax
084290c7 +0x5a1:  mov    %eax,(%esp)
084290ca +0x5a4:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084290cf +0x5a9:  movl   $0x1,0x4(%esp)
084290d7 +0x5b1:  mov    -0x50(%ebp),%eax
084290da +0x5b4:  mov    %eax,(%esp)
084290dd +0x5b7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084290e2 +0x5bc:  xor    $0x1,%eax
084290e5 +0x5bf:  test   %al,%al
084290e7 +0x5c1:  je     084290f3 <+0x5cd>
084290e9 +0x5c3:  mov    $0x0,%ebx
084290ee +0x5c8:  jmp    0842934c <+0x826>
084290f3 +0x5cd:  movl   $0x0,-0x3c(%ebp)
084290fa +0x5d4:  mov    -0x3c(%ebp),%eax
084290fd +0x5d7:  mov    -0xa8(%ebp,%eax,4),%eax
08429104 +0x5de:  mov    %eax,-0x38(%ebp)
08429107 +0x5e1:  lea    -0x120(%ebp),%ebx
0842910d +0x5e7:  mov    %ebx,%edi
0842910f +0x5e9:  mov    $0x4,%esi
08429114 +0x5ee:  jmp    08429124 <+0x5fe>
08429116 +0x5f0:  mov    %edi,(%esp)
08429119 +0x5f3:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0842911e +0x5f8:  add    $0xc,%edi
08429121 +0x5fb:  sub    $0x1,%esi
08429124 +0x5fe:  cmp    $0xffffffff,%esi
08429127 +0x601:  setne  %al
0842912a +0x604:  test   %al,%al
0842912c +0x606:  jne    08429116 <+0x5f0>
0842912e +0x608:  jmp    0842916f <+0x649>
08429130 +0x60a:  mov    %edx,%edi
08429132 +0x60c:  mov    %eax,-0x612c(%ebp)
08429138 +0x612:  test   %ebx,%ebx
0842913a +0x614:  je     08429162 <+0x63c>
0842913c +0x616:  mov    $0x4,%eax
08429141 +0x61b:  sub    %esi,%eax
08429143 +0x61d:  mov    %eax,%edx
08429145 +0x61f:  mov    %edx,%eax
08429147 +0x621:  add    %eax,%eax
08429149 +0x623:  add    %edx,%eax
0842914b +0x625:  shl    $0x2,%eax
0842914e +0x628:  lea    (%ebx,%eax,1),%esi
08429151 +0x62b:  cmp    %ebx,%esi
08429153 +0x62d:  je     08429162 <+0x63c>
08429155 +0x62f:  sub    $0xc,%esi
08429158 +0x632:  mov    %esi,(%esp)
0842915b +0x635:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08429160 +0x63a:  jmp    08429151 <+0x62b>
08429162 +0x63c:  mov    -0x612c(%ebp),%eax
08429168 +0x642:  mov    %edi,%edx
0842916a +0x644:  jmp    08429322 <+0x7fc>
0842916f +0x649:  movl   $0x0,-0x24(%ebp)
08429176 +0x650:  jmp    084291f3 <+0x6cd>
08429178 +0x652:  cmpl   $0x0,-0x38(%ebp)
0842917c +0x656:  jne    084291b0 <+0x68a>
0842917e +0x658:  movb   $0x0,-0x1d(%ebp)
08429182 +0x65c:  addl   $0x1,-0x3c(%ebp)
08429186 +0x660:  cmpl   $0x5,-0x3c(%ebp)
0842918a +0x664:  jne    08429192 <+0x66c>
0842918c +0x666:  movb   $0x1,-0x1d(%ebp)
08429190 +0x66a:  jmp    084291aa <+0x684>
08429192 +0x66c:  mov    -0x3c(%ebp),%eax
08429195 +0x66f:  mov    -0xa8(%ebp,%eax,4),%eax
0842919c +0x676:  mov    %eax,-0x38(%ebp)
0842919f +0x679:  cmpl   $0x0,-0x38(%ebp)
084291a3 +0x67d:  sete   %al
084291a6 +0x680:  test   %al,%al
084291a8 +0x682:  jne    08429182 <+0x65c>
084291aa +0x684:  cmpb   $0x0,-0x1d(%ebp)
084291ae +0x688:  jne    0842920e <+0x6e8>
084291b0 +0x68a:  mov    -0x24(%ebp),%eax
084291b3 +0x68d:  mov    %eax,0x4(%esp)
084291b7 +0x691:  lea    -0x78(%ebp),%eax
084291ba +0x694:  mov    %eax,(%esp)
084291bd +0x697:  call   084523a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4fbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4fbc
084291c2 +0x69c:  mov    (%eax),%eax
084291c4 +0x69e:  mov    %eax,-0x54(%ebp)
084291c7 +0x6a1:  mov    -0x3c(%ebp),%edx
084291ca +0x6a4:  lea    -0x120(%ebp),%ecx
084291d0 +0x6aa:  mov    %edx,%eax
084291d2 +0x6ac:  add    %eax,%eax
084291d4 +0x6ae:  add    %edx,%eax
084291d6 +0x6b0:  shl    $0x2,%eax
084291d9 +0x6b3:  lea    (%ecx,%eax,1),%edx
084291dc +0x6b6:  lea    -0x54(%ebp),%eax
084291df +0x6b9:  mov    %eax,0x4(%esp)
084291e3 +0x6bd:  mov    %edx,(%esp)
084291e6 +0x6c0:  call   0808e1ee <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x5e>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x5e
084291eb +0x6c5:  subl   $0x1,-0x38(%ebp)
084291ef +0x6c9:  addl   $0x1,-0x24(%ebp)
084291f3 +0x6cd:  lea    -0x78(%ebp),%eax
084291f6 +0x6d0:  mov    %eax,(%esp)
084291f9 +0x6d3:  call   0845238a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4fa0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4fa0
084291fe +0x6d8:  cmp    -0x24(%ebp),%eax
08429201 +0x6db:  seta   %al
08429204 +0x6de:  test   %al,%al
08429206 +0x6e0:  jne    08429178 <+0x652>
0842920c +0x6e6:  jmp    0842920f <+0x6e9>
0842920e +0x6e8:  nop
0842920f +0x6e9:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08429216 +0x6f0:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842921b +0x6f5:  mov    %eax,-0x34(%ebp)
0842921e +0x6f8:  movl   $0x0,-0x1c(%ebp)
08429225 +0x6ff:  jmp    084292c2 <+0x79c>
0842922a +0x704:  mov    -0x1c(%ebp),%edx
0842922d +0x707:  lea    -0x120(%ebp),%ecx
08429233 +0x70d:  mov    %edx,%eax
08429235 +0x70f:  add    %eax,%eax
08429237 +0x711:  add    %edx,%eax
08429239 +0x713:  shl    $0x2,%eax
0842923c +0x716:  lea    (%ecx,%eax,1),%eax
0842923f +0x719:  mov    %eax,(%esp)
08429242 +0x71c:  call   0811c960 <_GLOBAL__I_events+0x1003>  ; global constructors keyed to events+0x1003
08429247 +0x721:  test   %al,%al
08429249 +0x723:  jne    084292bd <+0x797>
0842924b +0x725:  mov    -0x1c(%ebp),%edx
0842924e +0x728:  lea    -0x120(%ebp),%ecx
08429254 +0x72e:  mov    %edx,%eax
08429256 +0x730:  add    %eax,%eax
08429258 +0x732:  add    %edx,%eax
0842925a +0x734:  shl    $0x2,%eax
0842925d +0x737:  lea    (%ecx,%eax,1),%edx
08429260 +0x73a:  lea    -0x6120(%ebp),%eax
08429266 +0x740:  mov    %eax,0x4(%esp)
0842926a +0x744:  mov    %edx,(%esp)
0842926d +0x747:  call   083ffa02 <_Z15getList2inQueryRKSt6vectorIiSaIiEEPc>  ; getList2inQuery(std::vector<int, std::allocator<int> > const&, char*)
08429272 +0x74c:  mov    $0x5,%edx
08429277 +0x751:  sub    -0x1c(%ebp),%edx
0842927a +0x754:  mov    %eax,0x10(%esp)
0842927e +0x758:  mov    -0x34(%ebp),%eax
08429281 +0x75b:  mov    %eax,0xc(%esp)
08429285 +0x75f:  mov    %edx,0x8(%esp)
08429289 +0x763:  movl   $"upDate pvp_result set pvp_grade_ext=%d, pvp_grade_ext_update_time=from_unixtime(%d) where charac_no %s",0x4(%esp)
08429291 +0x76b:  mov    -0x50(%ebp),%eax
08429294 +0x76e:  mov    %eax,(%esp)
08429297 +0x771:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842929c +0x776:  movl   $0x1,0x4(%esp)
084292a4 +0x77e:  mov    -0x50(%ebp),%eax
084292a7 +0x781:  mov    %eax,(%esp)
084292aa +0x784:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084292af +0x789:  xor    $0x1,%eax
084292b2 +0x78c:  test   %al,%al
084292b4 +0x78e:  je     084292be <+0x798>
084292b6 +0x790:  mov    $0x0,%ebx
084292bb +0x795:  jmp    08429302 <+0x7dc>
084292bd +0x797:  nop
084292be +0x798:  addl   $0x1,-0x1c(%ebp)
084292c2 +0x79c:  cmpl   $0x4,-0x1c(%ebp)
084292c6 +0x7a0:  setle  %al
084292c9 +0x7a3:  test   %al,%al
084292cb +0x7a5:  jne    0842922a <+0x704>
084292d1 +0x7ab:  mov    $0x1,%ebx
084292d6 +0x7b0:  jmp    08429302 <+0x7dc>
084292d8 +0x7b2:  mov    %edx,%esi
084292da +0x7b4:  mov    %eax,%edi
084292dc +0x7b6:  lea    -0x120(%ebp),%eax
084292e2 +0x7bc:  lea    0x3c(%eax),%ebx
084292e5 +0x7bf:  lea    -0x120(%ebp),%eax
084292eb +0x7c5:  cmp    %eax,%ebx
084292ed +0x7c7:  je     084292fc <+0x7d6>
084292ef +0x7c9:  sub    $0xc,%ebx
084292f2 +0x7cc:  mov    %ebx,(%esp)
084292f5 +0x7cf:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
084292fa +0x7d4:  jmp    084292e5 <+0x7bf>
084292fc +0x7d6:  mov    %edi,%eax
084292fe +0x7d8:  mov    %esi,%edx
08429300 +0x7da:  jmp    08429322 <+0x7fc>
08429302 +0x7dc:  lea    -0x120(%ebp),%eax
08429308 +0x7e2:  lea    0x3c(%eax),%esi
0842930b +0x7e5:  lea    -0x120(%ebp),%eax
08429311 +0x7eb:  cmp    %eax,%esi
08429313 +0x7ed:  je     0842934c <+0x826>
08429315 +0x7ef:  sub    $0xc,%esi
08429318 +0x7f2:  mov    %esi,(%esp)
0842931b +0x7f5:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08429320 +0x7fa:  jmp    0842930b <+0x7e5>
08429322 +0x7fc:  mov    %edx,%esi
08429324 +0x7fe:  mov    %eax,%edi
08429326 +0x800:  lea    -0x90(%ebp),%eax
0842932c +0x806:  lea    0x18(%eax),%ebx
0842932f +0x809:  lea    -0x90(%ebp),%eax
08429335 +0x80f:  cmp    %eax,%ebx
08429337 +0x811:  je     08429346 <+0x820>
08429339 +0x813:  sub    $0xc,%ebx
0842933c +0x816:  mov    %ebx,(%esp)
0842933f +0x819:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08429344 +0x81e:  jmp    0842932f <+0x809>
08429346 +0x820:  mov    %edi,%eax
08429348 +0x822:  mov    %esi,%edx
0842934a +0x824:  jmp    0842936c <+0x846>
0842934c +0x826:  lea    -0x90(%ebp),%eax
08429352 +0x82c:  lea    0x18(%eax),%esi
08429355 +0x82f:  lea    -0x90(%ebp),%eax
0842935b +0x835:  cmp    %eax,%esi
0842935d +0x837:  je     08429387 <+0x861>
0842935f +0x839:  sub    $0xc,%esi
08429362 +0x83c:  mov    %esi,(%esp)
08429365 +0x83f:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0842936a +0x844:  jmp    08429355 <+0x82f>
0842936c +0x846:  mov    %edx,%ebx
0842936e +0x848:  mov    %eax,%esi
08429370 +0x84a:  lea    -0x78(%ebp),%eax
08429373 +0x84d:  mov    %eax,(%esp)
08429376 +0x850:  call   084522b8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4ece>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4ece
0842937b +0x855:  mov    %esi,%eax
0842937d +0x857:  mov    %ebx,%edx
0842937f +0x859:  mov    %eax,(%esp)
08429382 +0x85c:  call   08ae3750 <_Unwind_Resume>
08429387 +0x861:  lea    -0x78(%ebp),%eax
0842938a +0x864:  mov    %eax,(%esp)
0842938d +0x867:  call   084522b8 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4ece>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4ece
08429392 +0x86c:  mov    %ebx,%eax
08429394 +0x86e:  add    $0x614c,%esp
0842939a +0x874:  pop    %ebx
0842939b +0x875:  pop    %esi
0842939c +0x876:  pop    %edi
0842939d +0x877:  pop    %ebp
0842939e +0x878:  ret
0842939f +0x879:  nop
```

## 反编译 C

```c
// DB_UpdatePvPGrade::dispatch @ 0x8428b26

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DB_UpdatePvPGrade::dispatch(int, int, Stream*) */

undefined4 DB_UpdatePvPGrade::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  tm *ptVar10;
  vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> *this;
  vector<int,std::allocator<int>> *this_00;
  char local_6124 [24576];
  tm local_124;
  tm local_e8;
  uint local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  int local_ac [6];
  vector<int,std::allocator<int>> local_94 [12];
  vector<int,std::allocator<int>> avStack_88 [12];
  vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> local_7c [12];
  time_t local_70;
  uint local_6c;
  uint local_68;
  int local_64;
  int local_60 [3];
  MySQL *local_54;
  int local_50;
  int local_4c;
  vector<int,std::allocator<int>> *local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  char local_21;
  int local_20;
  
  local_54 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar3 = RefPvpGrade::getPvPRankRateGrade(GlobalData::s_ref_pvp_grade);
  MySQL::set_query(local_54,
                   "seLect charac_no,pvp_grade,pvp_point,unix_timestamp(last_play_time) from pvp_grade_expand where pvp_grade>=%d order by pvp_point desc limit 1500"
                   ,uVar3);
  cVar2 = MySQL::exec(local_54,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(local_54), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  local_70 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  localtime_r(&local_70,&local_e8);
  local_e8.tm_hour = 1;
  local_e8.tm_min = 0;
  local_e8.tm_sec = 0;
  local_70 = mktime(&local_e8);
  local_50 = local_70 + -0x15180;
  std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::vector(local_7c);
  this_00 = local_94;
  for (iVar4 = 1; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 08428c34 to 08428c38 has its CatchHandler @ 08428c4b */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  iVar4 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
                    /* try { // try from 08428ca4 to 084290e1 has its CatchHandler @ 08429322 */
  local_ac[5] = RefPvpGrade::GetPvpPoint(GlobalData::s_ref_pvp_grade,iVar4);
  local_34 = 0;
  while (uVar6 = MySQL::get_n_rows(local_54), local_34 < uVar6) {
    cVar2 = MySQL::fetch(local_54);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_uint(local_54,0,&local_bc);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_int(local_54,1,&local_b8);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_int(local_54,2,&local_b4);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    cVar2 = MySQL::get_uint(local_54,3,&local_b0);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
    iVar5 = RefPvpGrade::getPvPExpLossGrade(GlobalData::s_ref_pvp_grade);
    iVar4 = local_b4;
    if (((iVar5 <= local_b8) && ((int)local_b0 <= local_50)) && (local_ac[5] < local_b4)) {
      iVar5 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
      if (iVar5 + local_ac[5] < iVar4) {
        local_6c = local_bc;
        std::vector<int,std::allocator<int>>::push_back(local_94,(int *)&local_6c);
      }
      else {
        local_68 = local_bc;
        std::vector<int,std::allocator<int>>::push_back(avStack_88,(int *)&local_68);
      }
      iVar4 = local_b4;
      local_64 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
      local_64 = iVar4 - local_64;
      piVar7 = std::max<int>(local_ac + 5,&local_64);
      local_b4 = *piVar7;
    }
    std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::push_back
              (local_7c,(stPvPTempTable_t *)&local_bc);
    local_34 = local_34 + 1;
  }
  local_4c = std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::size(local_7c);
  local_48 = (vector<int,std::allocator<int>> *)
             RefPvpGrade::getPvPRankRate(GlobalData::s_ref_pvp_grade);
  local_44 = 4;
  local_ac[0] = 0;
  local_ac[1] = 0;
  local_ac[2] = 0;
  local_ac[3] = 0;
  local_ac[4] = 0;
  for (local_30 = 0; uVar6 = local_30, (int)local_30 < 5; local_30 = local_30 + 1) {
    piVar7 = (int *)std::vector<int,std::allocator<int>>::operator[](local_48,local_30);
    local_ac[uVar6] = (*piVar7 * local_4c + 500) / 1000;
  }
  for (local_2c = 1; iVar4 = local_2c, local_2c < 5; local_2c = local_2c + 1) {
    if (0 < local_ac[local_2c + -1]) {
      local_60[0] = local_ac[local_2c] - local_ac[local_2c + -1];
      local_60[1] = 1;
      piVar7 = std::max<int>(local_60 + 1,local_60);
      local_ac[iVar4] = *piVar7;
    }
  }
  if ((local_4c != 0) && (local_ac[3] == 0)) {
    local_ac[4] = 1;
  }
  memset(local_6124,0,0x6000);
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    uVar3 = getList2inQuery((vector *)local_94,local_6124);
    uVar8 = RefPvpGrade::getPvPExpLossExp(GlobalData::s_ref_pvp_grade);
    MySQL::set_query(local_54,"upDate pvp_result set pvp_point=pvp_point-%d where charac_no %s",
                     uVar8,uVar3);
    cVar2 = MySQL::exec(local_54,true);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
  }
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 != '\x01') {
    uVar3 = getList2inQuery((vector *)avStack_88,local_6124);
    MySQL::set_query(local_54,"upDate pvp_result set pvp_point=%d where charac_no %s",local_ac[5],
                     uVar3);
    cVar2 = MySQL::exec(local_54,true);
    if (cVar2 != '\x01') {
      uVar3 = 0;
      goto LAB_0842934c;
    }
  }
  local_40 = 0;
  local_3c = local_ac[0];
  ptVar10 = &local_124;
  for (iVar4 = 4; iVar4 != -1; iVar4 = iVar4 + -1) {
                    /* try { // try from 08429119 to 0842911d has its CatchHandler @ 08429130 */
    std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)ptVar10);
    ptVar10 = (tm *)&ptVar10->tm_mday;
  }
  local_28 = 0;
  while (uVar6 = std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::size(local_7c),
        local_28 < uVar6) {
    if (local_3c == 0) {
      local_21 = '\0';
      do {
        local_40 = local_40 + 1;
        if (local_40 == 5) {
          local_21 = '\x01';
          break;
        }
        local_3c = local_ac[local_40];
      } while (local_ac[local_40] == 0);
      if (local_21 != '\0') break;
    }
    puVar9 = (undefined4 *)
             std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::operator[]
                       (local_7c,local_28);
    local_60[2] = *puVar9;
                    /* try { // try from 084291e6 to 084292ae has its CatchHandler @ 084292d8 */
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(&local_124.tm_sec + local_40 * 3),local_60 + 2);
    local_3c = local_3c + -1;
    local_28 = local_28 + 1;
  }
  local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
    cVar2 = std::vector<int,std::allocator<int>>::empty();
    if (cVar2 == '\0') {
      uVar3 = getList2inQuery((vector *)(&local_124.tm_sec + local_20 * 3),local_6124);
      MySQL::set_query(local_54,
                       "upDate pvp_result set pvp_grade_ext=%d, pvp_grade_ext_update_time=from_unixtime(%d) where charac_no %s"
                       ,5 - local_20,local_38,uVar3);
      cVar2 = MySQL::exec(local_54,true);
      if (cVar2 != '\x01') {
        uVar3 = 0;
        goto LAB_08429302;
      }
    }
  }
  uVar3 = 1;
LAB_08429302:
  ptVar10 = &local_e8;
  while (ptVar10 != &local_124) {
    ptVar10 = (tm *)&ptVar10[-1].tm_isdst;
                    /* try { // try from 0842931b to 0842931f has its CatchHandler @ 08429322 */
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)ptVar10);
  }
LAB_0842934c:
  this = local_7c;
  while (this != (vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>> *)local_94) {
    this = this + -0xc;
                    /* try { // try from 08429365 to 08429369 has its CatchHandler @ 0842936c */
    std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  }
  std::vector<stPvPTempTable_t,std::allocator<stPvPTempTable_t>>::~vector(local_7c);
  return uVar3;
}
```
