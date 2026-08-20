# GetAccountInfo

`_ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA`

`DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0841325e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841325e  _ZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATA
#           DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)
# range [0x0841325e, 0x084143ab]
0841325e +0x0000:  push   %ebp
0841325f +0x0001:  mov    %esp,%ebp
08413261 +0x0003:  push   %edi
08413262 +0x0004:  push   %esi
08413263 +0x0005:  push   %ebx
08413264 +0x0006:  sub    $0x3fc,%esp
0841326a +0x000c:  lea    -0x3b2(%ebp),%edx
08413270 +0x0012:  mov    $0x84,%ebx
08413275 +0x0017:  mov    $0x0,%eax
0841327a +0x001c:  mov    %edx,%ecx
0841327c +0x001e:  and    $0x2,%ecx
0841327f +0x0021:  test   %ecx,%ecx
08413281 +0x0023:  je     0841328c <+0x2e>
08413283 +0x0025:  mov    %ax,(%edx)
08413286 +0x0028:  add    $0x2,%edx
08413289 +0x002b:  sub    $0x2,%ebx
0841328c +0x002e:  mov    %ebx,%ecx
0841328e +0x0030:  shr    $0x2,%ecx
08413291 +0x0033:  mov    %edx,%edi
08413293 +0x0035:  rep stos %eax,%es:(%edi)
08413295 +0x0037:  mov    %edi,%edx
08413297 +0x0039:  mov    %ebx,%ecx
08413299 +0x003b:  and    $0x2,%ecx
0841329c +0x003e:  test   %ecx,%ecx
0841329e +0x0040:  je     084132a6 <+0x48>
084132a0 +0x0042:  mov    %ax,(%edx)
084132a3 +0x0045:  add    $0x2,%edx
084132a6 +0x0048:  mov    %ebx,%ecx
084132a8 +0x004a:  and    $0x1,%ecx
084132ab +0x004d:  test   %ecx,%ecx
084132ad +0x004f:  je     084132b4 <+0x56>
084132af +0x0051:  mov    %al,(%edx)
084132b1 +0x0053:  add    $0x1,%edx
084132b4 +0x0056:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084132b9 +0x005b:  movl   $0x0,0x8(%esp)
084132c1 +0x0063:  movl   $0x1,0x4(%esp)
084132c9 +0x006b:  mov    %eax,(%esp)
084132cc +0x006e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084132d1 +0x0073:  mov    %eax,-0x20(%ebp)
084132d4 +0x0076:  mov    0xc(%ebp),%eax
084132d7 +0x0079:  movzbl 0xa0(%eax),%eax
084132de +0x0080:  movzbl %al,%edx
084132e1 +0x0083:  mov    0xc(%ebp),%eax
084132e4 +0x0086:  mov    %edx,0xc(%esp)
084132e8 +0x008a:  mov    %eax,0x8(%esp)
084132ec +0x008e:  movl   $"seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),'%%Y%%m%%d%%H'),user_name,email,hangame_flag,reg_date from  member_info  where  user_id='%s' and hangame_flag=%d",0x4(%esp)
084132f4 +0x0096:  mov    -0x20(%ebp),%eax
084132f7 +0x0099:  mov    %eax,(%esp)
084132fa +0x009c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084132ff +0x00a1:  movl   $0x1,0x4(%esp)
08413307 +0x00a9:  mov    -0x20(%ebp),%eax
0841330a +0x00ac:  mov    %eax,(%esp)
0841330d +0x00af:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08413312 +0x00b4:  xor    $0x1,%eax
08413315 +0x00b7:  test   %al,%al
08413317 +0x00b9:  je     08413366 <+0x108>
08413319 +0x00bb:  mov    0xc(%ebp),%ebx
0841331c +0x00be:  movl   $0x5,0xc(%esp)
08413324 +0x00c6:  movl   $0x397f,0x8(%esp)
0841332c +0x00ce:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413334 +0x00d6:  lea    -0x128(%ebp),%eax
0841333a +0x00dc:  mov    %eax,(%esp)
0841333d +0x00df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413342 +0x00e4:  mov    %ebx,0x8(%esp)
08413346 +0x00e8:  movl   $"DB_Login::GetAccountInfo, exec() ERROR m_id=%s",0x4(%esp)
0841334e +0x00f0:  lea    -0x128(%ebp),%eax
08413354 +0x00f6:  mov    %eax,(%esp)
08413357 +0x00f9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841335c +0x00fe:  mov    $0x0,%eax
08413361 +0x0103:  jmp    084143a1 <+0x1143>
08413366 +0x0108:  mov    -0x20(%ebp),%eax
08413369 +0x010b:  mov    %eax,(%esp)
0841336c +0x010e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08413371 +0x0113:  test   %eax,%eax
08413373 +0x0115:  jne    0841339c <+0x13e>
08413375 +0x0117:  mov    -0x20(%ebp),%eax
08413378 +0x011a:  mov    %eax,0x8(%esp)
0841337c +0x011e:  mov    0xc(%ebp),%eax
0841337f +0x0121:  mov    %eax,0x4(%esp)
08413383 +0x0125:  mov    0x8(%ebp),%eax
08413386 +0x0128:  mov    %eax,(%esp)
08413389 +0x012b:  call   08412eb8 <_ZN8DB_Login13CreateAccountEP14SIG_LOGIN_DATAP5MySQL>  ; DB_Login::CreateAccount(SIG_LOGIN_DATA*, MySQL*)
0841338e +0x0130:  xor    $0x1,%eax
08413391 +0x0133:  test   %al,%al
08413393 +0x0135:  je     0841339c <+0x13e>
08413395 +0x0137:  mov    $0x1,%eax
0841339a +0x013c:  jmp    084133a1 <+0x143>
0841339c +0x013e:  mov    $0x0,%eax
084133a1 +0x0143:  test   %al,%al
084133a3 +0x0145:  je     084133f2 <+0x194>
084133a5 +0x0147:  mov    0xc(%ebp),%ebx
084133a8 +0x014a:  movl   $0x0,0xc(%esp)
084133b0 +0x0152:  movl   $0x3986,0x8(%esp)
084133b8 +0x015a:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
084133c0 +0x0162:  lea    -0x118(%ebp),%eax
084133c6 +0x0168:  mov    %eax,(%esp)
084133c9 +0x016b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084133ce +0x0170:  mov    %ebx,0x8(%esp)
084133d2 +0x0174:  movl   $"[Taiwan, Auth] Fail create account. id=%s",0x4(%esp)
084133da +0x017c:  lea    -0x118(%ebp),%eax
084133e0 +0x0182:  mov    %eax,(%esp)
084133e3 +0x0185:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084133e8 +0x018a:  mov    $0x0,%eax
084133ed +0x018f:  jmp    084143a1 <+0x1143>
084133f2 +0x0194:  mov    -0x20(%ebp),%eax
084133f5 +0x0197:  mov    %eax,(%esp)
084133f8 +0x019a:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084133fd +0x019f:  xor    $0x1,%eax
08413400 +0x01a2:  test   %al,%al
08413402 +0x01a4:  je     08413451 <+0x1f3>
08413404 +0x01a6:  mov    0xc(%ebp),%ebx
08413407 +0x01a9:  movl   $0x5,0xc(%esp)
0841340f +0x01b1:  movl   $0x39af,0x8(%esp)
08413417 +0x01b9:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0841341f +0x01c1:  lea    -0x108(%ebp),%eax
08413425 +0x01c7:  mov    %eax,(%esp)
08413428 +0x01ca:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841342d +0x01cf:  mov    %ebx,0x8(%esp)
08413431 +0x01d3:  movl   $"DB_Login::GetAccountInfo, fetch() ERROR m_id=%s",0x4(%esp)
08413439 +0x01db:  lea    -0x108(%ebp),%eax
0841343f +0x01e1:  mov    %eax,(%esp)
08413442 +0x01e4:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413447 +0x01e9:  mov    $0x0,%eax
0841344c +0x01ee:  jmp    084143a1 <+0x1143>
08413451 +0x01f3:  mov    0xc(%ebp),%eax
08413454 +0x01f6:  add    $0xc0,%eax
08413459 +0x01fb:  mov    %eax,0x8(%esp)
0841345d +0x01ff:  movl   $0x0,0x4(%esp)
08413465 +0x0207:  mov    -0x20(%ebp),%eax
08413468 +0x020a:  mov    %eax,(%esp)
0841346b +0x020d:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08413470 +0x0212:  xor    $0x1,%eax
08413473 +0x0215:  test   %al,%al
08413475 +0x0217:  je     084134c4 <+0x266>
08413477 +0x0219:  mov    0xc(%ebp),%ebx
0841347a +0x021c:  movl   $0x5,0xc(%esp)
08413482 +0x0224:  movl   $0x39b5,0x8(%esp)
0841348a +0x022c:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413492 +0x0234:  lea    -0xf8(%ebp),%eax
08413498 +0x023a:  mov    %eax,(%esp)
0841349b +0x023d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084134a0 +0x0242:  mov    %ebx,0x8(%esp)
084134a4 +0x0246:  movl   $"DB_Login::GetAccountInfo, get(0) ERROR m_id=%s",0x4(%esp)
084134ac +0x024e:  lea    -0xf8(%ebp),%eax
084134b2 +0x0254:  mov    %eax,(%esp)
084134b5 +0x0257:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084134ba +0x025c:  mov    $0x0,%eax
084134bf +0x0261:  jmp    084143a1 <+0x1143>
084134c4 +0x0266:  mov    -0x20(%ebp),%eax
084134c7 +0x0269:  mov    %eax,(%esp)
084134ca +0x026c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084134cf +0x0271:  cmp    $0x1,%eax
084134d2 +0x0274:  setne  %al
084134d5 +0x0277:  test   %al,%al
084134d7 +0x0279:  je     084135fa <+0x39c>
084134dd +0x027f:  mov    0xc(%ebp),%eax
084134e0 +0x0282:  mov    0xc0(%eax),%eax
084134e6 +0x0288:  movl   $0x0,0x4(%esp)
084134ee +0x0290:  mov    %eax,(%esp)
084134f1 +0x0293:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084134f6 +0x0298:  mov    %eax,%ebx
084134f8 +0x029a:  mov    -0x20(%ebp),%eax
084134fb +0x029d:  mov    %eax,(%esp)
084134fe +0x02a0:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08413503 +0x02a5:  mov    %ebx,0xc(%esp)
08413507 +0x02a9:  mov    %eax,0x8(%esp)
0841350b +0x02ad:  movl   $"upDate member_abnomal set overlab_count=%d where user_id=%s",0x4(%esp)
08413513 +0x02b5:  mov    -0x20(%ebp),%eax
08413516 +0x02b8:  mov    %eax,(%esp)
08413519 +0x02bb:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841351e +0x02c0:  movl   $0x1,0x4(%esp)
08413526 +0x02c8:  mov    -0x20(%ebp),%eax
08413529 +0x02cb:  mov    %eax,(%esp)
0841352c +0x02ce:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08413531 +0x02d3:  xor    $0x1,%eax
08413534 +0x02d6:  test   %al,%al
08413536 +0x02d8:  jne    08413549 <+0x2eb>
08413538 +0x02da:  mov    -0x20(%ebp),%eax
0841353b +0x02dd:  mov    %eax,(%esp)
0841353e +0x02e0:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08413543 +0x02e5:  or     %edx,%eax
08413545 +0x02e7:  test   %eax,%eax
08413547 +0x02e9:  jne    08413550 <+0x2f2>
08413549 +0x02eb:  mov    $0x1,%eax
0841354e +0x02f0:  jmp    08413555 <+0x2f7>
08413550 +0x02f2:  mov    $0x0,%eax
08413555 +0x02f7:  test   %al,%al
08413557 +0x02f9:  je     084135ad <+0x34f>
08413559 +0x02fb:  mov    -0x20(%ebp),%eax
0841355c +0x02fe:  mov    %eax,(%esp)
0841355f +0x0301:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08413564 +0x0306:  mov    %eax,%ebx
08413566 +0x0308:  mov    0xc(%ebp),%eax
08413569 +0x030b:  mov    0xc0(%eax),%eax
0841356f +0x0311:  movl   $0x0,0x4(%esp)
08413577 +0x0319:  mov    %eax,(%esp)
0841357a +0x031c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841357f +0x0321:  mov    %ebx,0xc(%esp)
08413583 +0x0325:  mov    %eax,0x8(%esp)
08413587 +0x0329:  movl   $"inSert into member_abnomal(user_id, overlab_count) values(%s,%d)",0x4(%esp)
0841358f +0x0331:  mov    -0x20(%ebp),%eax
08413592 +0x0334:  mov    %eax,(%esp)
08413595 +0x0337:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841359a +0x033c:  movl   $0x1,0x4(%esp)
084135a2 +0x0344:  mov    -0x20(%ebp),%eax
084135a5 +0x0347:  mov    %eax,(%esp)
084135a8 +0x034a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084135ad +0x034f:  mov    0xc(%ebp),%ebx
084135b0 +0x0352:  movl   $0x5,0xc(%esp)
084135b8 +0x035a:  movl   $0x39c2,0x8(%esp)
084135c0 +0x0362:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
084135c8 +0x036a:  lea    -0xe8(%ebp),%eax
084135ce +0x0370:  mov    %eax,(%esp)
084135d1 +0x0373:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084135d6 +0x0378:  mov    %ebx,0x8(%esp)
084135da +0x037c:  movl   $"DB_Login::GetAccountInfo, get_n_rows()!=1 ERROR m_id=%s",0x4(%esp)
084135e2 +0x0384:  lea    -0xe8(%ebp),%eax
084135e8 +0x038a:  mov    %eax,(%esp)
084135eb +0x038d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084135f0 +0x0392:  mov    $0x0,%eax
084135f5 +0x0397:  jmp    084143a1 <+0x1143>
084135fa +0x039c:  movl   $0x84,0xc(%esp)
08413602 +0x03a4:  lea    -0x3b2(%ebp),%eax
08413608 +0x03aa:  mov    %eax,0x8(%esp)
0841360c +0x03ae:  movl   $0x1,0x4(%esp)
08413614 +0x03b6:  mov    -0x20(%ebp),%eax
08413617 +0x03b9:  mov    %eax,(%esp)
0841361a +0x03bc:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0841361f +0x03c1:  xor    $0x1,%eax
08413622 +0x03c4:  test   %al,%al
08413624 +0x03c6:  je     08413673 <+0x415>
08413626 +0x03c8:  mov    0xc(%ebp),%ebx
08413629 +0x03cb:  movl   $0x5,0xc(%esp)
08413631 +0x03d3:  movl   $0x39c8,0x8(%esp)
08413639 +0x03db:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413641 +0x03e3:  lea    -0xd8(%ebp),%eax
08413647 +0x03e9:  mov    %eax,(%esp)
0841364a +0x03ec:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841364f +0x03f1:  mov    %ebx,0x8(%esp)
08413653 +0x03f5:  movl   $"DB_Login::GetAccountInfo, get(1) ERROR m_id=%s",0x4(%esp)
0841365b +0x03fd:  lea    -0xd8(%ebp),%eax
08413661 +0x0403:  mov    %eax,(%esp)
08413664 +0x0406:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413669 +0x040b:  mov    $0x0,%eax
0841366e +0x0410:  jmp    084143a1 <+0x1143>
08413673 +0x0415:  lea    -0x22c(%ebp),%eax
08413679 +0x041b:  mov    %eax,(%esp)
0841367c +0x041e:  call   0818fb28 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x2a>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x2a
08413681 +0x0423:  mov    0xc(%ebp),%eax
08413684 +0x0426:  lea    0x18(%eax),%ebx
08413687 +0x0429:  mov    0xc(%ebp),%eax
0841368a +0x042c:  mov    0xc0(%eax),%edx
08413690 +0x0432:  mov    &_ZN10GlobalData12s_psimpleSSOE,%eax
08413695 +0x0437:  lea    -0x22c(%ebp),%ecx
0841369b +0x043d:  mov    %ecx,0x10(%esp)
0841369f +0x0441:  mov    %ebx,0xc(%esp)
084136a3 +0x0445:  lea    -0x3b2(%ebp),%ecx
084136a9 +0x044b:  mov    %ecx,0x8(%esp)
084136ad +0x044f:  mov    %edx,0x4(%esp)
084136b1 +0x0453:  mov    %eax,(%esp)
084136b4 +0x0456:  call   086028c6 <_ZN8WongWork10CSimpleSSO18checkValidPasswordEjPKcS2_RNS0_14stOutputData_tE>  ; WongWork::CSimpleSSO::checkValidPassword(unsigned int, char const*, char const*, WongWork::CSimpleSSO::stOutputData_t&)
084136b9 +0x045b:  xor    $0x1,%eax
084136bc +0x045e:  test   %al,%al
084136be +0x0460:  je     08413713 <+0x4b5>
084136c0 +0x0462:  mov    0xc(%ebp),%eax
084136c3 +0x0465:  mov    0xc0(%eax),%eax
084136c9 +0x046b:  movl   $0x0,0x4(%esp)
084136d1 +0x0473:  mov    %eax,(%esp)
084136d4 +0x0476:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084136d9 +0x047b:  mov    %eax,0x14(%esp)
084136dd +0x047f:  movl   $"[Taiwan, Auth] Fail query member_login. (mid:%s)",0x10(%esp)
084136e5 +0x0487:  movl   $0x39da,0xc(%esp)
084136ed +0x048f:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084136f5 +0x0497:  movl   $"DBThread.cpp",0x4(%esp)
084136fd +0x049f:  movl   $0x1,(%esp)
08413704 +0x04a6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08413709 +0x04ab:  mov    $0x0,%eax
0841370e +0x04b0:  jmp    084143a1 <+0x1143>
08413713 +0x04b5:  mov    -0x22c(%ebp),%edx
08413719 +0x04bb:  mov    0xc(%ebp),%eax
0841371c +0x04be:  mov    %edx,0x3958(%eax)
08413722 +0x04c4:  mov    -0x228(%ebp),%edx
08413728 +0x04ca:  mov    0xc(%ebp),%eax
0841372b +0x04cd:  mov    %edx,0x3950(%eax)
08413731 +0x04d3:  mov    -0x224(%ebp),%edx
08413737 +0x04d9:  mov    0xc(%ebp),%eax
0841373a +0x04dc:  mov    %edx,0x3954(%eax)
08413740 +0x04e2:  mov    -0x220(%ebp),%edx
08413746 +0x04e8:  mov    0xc(%ebp),%eax
08413749 +0x04eb:  mov    %edx,0x3960(%eax)
0841374f +0x04f1:  movzbl -0x21c(%ebp),%edx
08413756 +0x04f8:  mov    0xc(%ebp),%eax
08413759 +0x04fb:  mov    %dl,0x3964(%eax)
0841375f +0x0501:  mov    -0x218(%ebp),%edx
08413765 +0x0507:  mov    0xc(%ebp),%eax
08413768 +0x050a:  mov    %edx,0x3968(%eax)
0841376e +0x0510:  mov    -0x1f8(%ebp),%eax
08413774 +0x0516:  mov    %eax,%edx
08413776 +0x0518:  mov    0xc(%ebp),%eax
08413779 +0x051b:  mov    %edx,0x396c(%eax)
0841377f +0x0521:  mov    -0x1f4(%ebp),%edx
08413785 +0x0527:  mov    0xc(%ebp),%eax
08413788 +0x052a:  mov    %edx,0x3970(%eax)
0841378e +0x0530:  mov    0xc(%ebp),%eax
08413791 +0x0533:  add    $0x3974,%eax
08413796 +0x0538:  movl   $0x28,0x8(%esp)
0841379e +0x0540:  movl   $0x0,0x4(%esp)
084137a6 +0x0548:  mov    %eax,(%esp)
084137a9 +0x054b:  call   0807dcc0 <_init+0x5b8>
084137ae +0x0550:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084137b3 +0x0555:  mov    %eax,(%esp)
084137b6 +0x0558:  call   0844dc4e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x864>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x864
084137bb +0x055d:  test   %al,%al
084137bd +0x055f:  je     084137d3 <+0x575>
084137bf +0x0561:  mov    0xc(%ebp),%eax
084137c2 +0x0564:  mov    0x396c(%eax),%eax
084137c8 +0x056a:  test   %eax,%eax
084137ca +0x056c:  je     084137d3 <+0x575>
084137cc +0x056e:  mov    $0x1,%eax
084137d1 +0x0573:  jmp    084137d8 <+0x57a>
084137d3 +0x0575:  mov    $0x0,%eax
084137d8 +0x057a:  test   %al,%al
084137da +0x057c:  je     08413813 <+0x5b5>
084137dc +0x057e:  mov    0xc(%ebp),%eax
084137df +0x0581:  lea    0x3974(%eax),%edx
084137e5 +0x0587:  mov    0xc(%ebp),%eax
084137e8 +0x058a:  mov    0x396c(%eax),%eax
084137ee +0x0590:  mov    %edx,0x8(%esp)
084137f2 +0x0594:  mov    %eax,0x4(%esp)
084137f6 +0x0598:  mov    0x8(%ebp),%eax
084137f9 +0x059b:  mov    %eax,(%esp)
084137fc +0x059e:  call   08414446 <_ZN8DB_Login13GetSchoolNameEiPc>  ; DB_Login::GetSchoolName(int, char*)
08413801 +0x05a3:  mov    0xc(%ebp),%eax
08413804 +0x05a6:  mov    %eax,0x4(%esp)
08413808 +0x05aa:  mov    0x8(%ebp),%eax
0841380b +0x05ad:  mov    %eax,(%esp)
0841380e +0x05b0:  call   08414512 <_ZN8DB_Login13GetBadgeCountEP14SIG_LOGIN_DATA>  ; DB_Login::GetBadgeCount(SIG_LOGIN_DATA*)
08413813 +0x05b5:  movzbl -0x1f0(%ebp),%edx
0841381a +0x05bc:  mov    0xc(%ebp),%eax
0841381d +0x05bf:  mov    %dl,0x39a2(%eax)
08413823 +0x05c5:  movzbl -0x200(%ebp),%edx
0841382a +0x05cc:  mov    0xc(%ebp),%eax
0841382d +0x05cf:  mov    %dl,0x39dc(%eax)
08413833 +0x05d5:  mov    0xc(%ebp),%eax
08413836 +0x05d8:  add    $0x3a3a,%eax
0841383b +0x05dd:  movl   $0x10,0x8(%esp)
08413843 +0x05e5:  lea    -0x22c(%ebp),%edx
08413849 +0x05eb:  add    $0x18,%edx
0841384c +0x05ee:  mov    %edx,0x4(%esp)
08413850 +0x05f2:  mov    %eax,(%esp)
08413853 +0x05f5:  call   0807d8d0 <_init+0x1c8>
08413858 +0x05fa:  mov    -0x1fc(%ebp),%edx
0841385e +0x0600:  mov    0xc(%ebp),%eax
08413861 +0x0603:  mov    %edx,0x395c(%eax)
08413867 +0x0609:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841386e +0x0610:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08413873 +0x0615:  mov    %eax,%ebx
08413875 +0x0617:  mov    -0x22c(%ebp),%esi
0841387b +0x061d:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08413880 +0x0622:  mov    0x37c(%eax),%eax
08413886 +0x0628:  mov    %ebx,0x8(%esp)
0841388a +0x062c:  mov    %esi,0x4(%esp)
0841388e +0x0630:  mov    %eax,(%esp)
08413891 +0x0633:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
08413896 +0x0638:  test   %al,%al
08413898 +0x063a:  je     084138a7 <+0x649>
0841389a +0x063c:  mov    0xc(%ebp),%eax
0841389d +0x063f:  movl   $0x0,0x395c(%eax)
084138a7 +0x0649:  movzbl -0x1ef(%ebp),%edx
084138ae +0x0650:  mov    0xc(%ebp),%eax
084138b1 +0x0653:  mov    %dl,0x3f10(%eax)
084138b7 +0x0659:  lea    -0x155(%ebp),%edx
084138bd +0x065f:  mov    $0x21,%ebx
084138c2 +0x0664:  mov    $0x0,%eax
084138c7 +0x0669:  mov    %edx,%ecx
084138c9 +0x066b:  and    $0x1,%ecx
084138cc +0x066e:  test   %ecx,%ecx
084138ce +0x0670:  je     084138d8 <+0x67a>
084138d0 +0x0672:  mov    %al,(%edx)
084138d2 +0x0674:  add    $0x1,%edx
084138d5 +0x0677:  sub    $0x1,%ebx
084138d8 +0x067a:  mov    %edx,%ecx
084138da +0x067c:  and    $0x2,%ecx
084138dd +0x067f:  test   %ecx,%ecx
084138df +0x0681:  je     084138ea <+0x68c>
084138e1 +0x0683:  mov    %ax,(%edx)
084138e4 +0x0686:  add    $0x2,%edx
084138e7 +0x0689:  sub    $0x2,%ebx
084138ea +0x068c:  mov    %ebx,%ecx
084138ec +0x068e:  shr    $0x2,%ecx
084138ef +0x0691:  mov    %edx,%edi
084138f1 +0x0693:  rep stos %eax,%es:(%edi)
084138f3 +0x0695:  mov    %edi,%edx
084138f5 +0x0697:  mov    %ebx,%ecx
084138f7 +0x0699:  and    $0x2,%ecx
084138fa +0x069c:  test   %ecx,%ecx
084138fc +0x069e:  je     08413904 <+0x6a6>
084138fe +0x06a0:  mov    %ax,(%edx)
08413901 +0x06a3:  add    $0x2,%edx
08413904 +0x06a6:  mov    %ebx,%ecx
08413906 +0x06a8:  and    $0x1,%ecx
08413909 +0x06ab:  test   %ecx,%ecx
0841390b +0x06ad:  je     08413912 <+0x6b4>
0841390d +0x06af:  mov    %al,(%edx)
0841390f +0x06b1:  add    $0x1,%edx
08413912 +0x06b4:  lea    -0x176(%ebp),%edx
08413918 +0x06ba:  mov    $0x21,%ebx
0841391d +0x06bf:  mov    $0x0,%eax
08413922 +0x06c4:  mov    %edx,%ecx
08413924 +0x06c6:  and    $0x2,%ecx
08413927 +0x06c9:  test   %ecx,%ecx
08413929 +0x06cb:  je     08413934 <+0x6d6>
0841392b +0x06cd:  mov    %ax,(%edx)
0841392e +0x06d0:  add    $0x2,%edx
08413931 +0x06d3:  sub    $0x2,%ebx
08413934 +0x06d6:  mov    %ebx,%ecx
08413936 +0x06d8:  shr    $0x2,%ecx
08413939 +0x06db:  mov    %edx,%edi
0841393b +0x06dd:  rep stos %eax,%es:(%edi)
0841393d +0x06df:  mov    %edi,%edx
0841393f +0x06e1:  mov    %ebx,%ecx
08413941 +0x06e3:  and    $0x2,%ecx
08413944 +0x06e6:  test   %ecx,%ecx
08413946 +0x06e8:  je     0841394e <+0x6f0>
08413948 +0x06ea:  mov    %ax,(%edx)
0841394b +0x06ed:  add    $0x2,%edx
0841394e +0x06f0:  mov    %ebx,%ecx
08413950 +0x06f2:  and    $0x1,%ecx
08413953 +0x06f5:  test   %ecx,%ecx
08413955 +0x06f7:  je     0841395c <+0x6fe>
08413957 +0x06f9:  mov    %al,(%edx)
08413959 +0x06fb:  add    $0x1,%edx
0841395c +0x06fe:  lea    -0x197(%ebp),%edx
08413962 +0x0704:  mov    $0x21,%ebx
08413967 +0x0709:  mov    $0x0,%eax
0841396c +0x070e:  mov    %edx,%ecx
0841396e +0x0710:  and    $0x1,%ecx
08413971 +0x0713:  test   %ecx,%ecx
08413973 +0x0715:  je     0841397d <+0x71f>
08413975 +0x0717:  mov    %al,(%edx)
08413977 +0x0719:  add    $0x1,%edx
0841397a +0x071c:  sub    $0x1,%ebx
0841397d +0x071f:  mov    %edx,%ecx
0841397f +0x0721:  and    $0x2,%ecx
08413982 +0x0724:  test   %ecx,%ecx
08413984 +0x0726:  je     0841398f <+0x731>
08413986 +0x0728:  mov    %ax,(%edx)
08413989 +0x072b:  add    $0x2,%edx
0841398c +0x072e:  sub    $0x2,%ebx
0841398f +0x0731:  mov    %ebx,%ecx
08413991 +0x0733:  shr    $0x2,%ecx
08413994 +0x0736:  mov    %edx,%edi
08413996 +0x0738:  rep stos %eax,%es:(%edi)
08413998 +0x073a:  mov    %edi,%edx
0841399a +0x073c:  mov    %ebx,%ecx
0841399c +0x073e:  and    $0x2,%ecx
0841399f +0x0741:  test   %ecx,%ecx
084139a1 +0x0743:  je     084139a9 <+0x74b>
084139a3 +0x0745:  mov    %ax,(%edx)
084139a6 +0x0748:  add    $0x2,%edx
084139a9 +0x074b:  mov    %ebx,%ecx
084139ab +0x074d:  and    $0x1,%ecx
084139ae +0x0750:  test   %ecx,%ecx
084139b0 +0x0752:  je     084139b7 <+0x759>
084139b2 +0x0754:  mov    %al,(%edx)
084139b4 +0x0756:  add    $0x1,%edx
084139b7 +0x0759:  lea    -0x1b8(%ebp),%edx
084139bd +0x075f:  mov    $0x0,%eax
084139c2 +0x0764:  mov    $0x8,%ecx
084139c7 +0x0769:  mov    %edx,%edi
084139c9 +0x076b:  rep stos %eax,%es:(%edi)
084139cb +0x076d:  mov    %edi,%edx
084139cd +0x076f:  mov    %al,(%edx)
084139cf +0x0771:  add    $0x1,%edx
084139d2 +0x0774:  movl   $0x21,0xc(%esp)
084139da +0x077c:  lea    -0x155(%ebp),%eax
084139e0 +0x0782:  mov    %eax,0x8(%esp)
084139e4 +0x0786:  movl   $0x2,0x4(%esp)
084139ec +0x078e:  mov    -0x20(%ebp),%eax
084139ef +0x0791:  mov    %eax,(%esp)
084139f2 +0x0794:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084139f7 +0x0799:  xor    $0x1,%eax
084139fa +0x079c:  test   %al,%al
084139fc +0x079e:  je     08413a4b <+0x7ed>
084139fe +0x07a0:  mov    0xc(%ebp),%ebx
08413a01 +0x07a3:  movl   $0x5,0xc(%esp)
08413a09 +0x07ab:  movl   $0x3a3f,0x8(%esp)
08413a11 +0x07b3:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413a19 +0x07bb:  lea    -0xc8(%ebp),%eax
08413a1f +0x07c1:  mov    %eax,(%esp)
08413a22 +0x07c4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413a27 +0x07c9:  mov    %ebx,0x8(%esp)
08413a2b +0x07cd:  movl   $"DB_Login::GetAccountInfo, get(2) ERROR m_id=%s",0x4(%esp)
08413a33 +0x07d5:  lea    -0xc8(%ebp),%eax
08413a39 +0x07db:  mov    %eax,(%esp)
08413a3c +0x07de:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413a41 +0x07e3:  mov    $0x0,%eax
08413a46 +0x07e8:  jmp    084143a1 <+0x1143>
08413a4b +0x07ed:  movl   $0x0,-0x28(%ebp)
08413a52 +0x07f4:  lea    -0x155(%ebp),%eax
08413a58 +0x07fa:  movzbl (%eax),%eax
08413a5b +0x07fd:  test   %al,%al
08413a5d +0x07ff:  je     08413b0c <+0x8ae>
08413a63 +0x0805:  mov    0xc(%ebp),%eax
08413a66 +0x0808:  mov    0xc0(%eax),%eax
08413a6c +0x080e:  mov    %eax,0xc(%esp)
08413a70 +0x0812:  lea    -0x176(%ebp),%eax
08413a76 +0x0818:  mov    %eax,0x8(%esp)
08413a7a +0x081c:  lea    -0x155(%ebp),%eax
08413a80 +0x0822:  mov    %eax,0x4(%esp)
08413a84 +0x0826:  mov    0x8(%ebp),%eax
08413a87 +0x0829:  mov    %eax,(%esp)
08413a8a +0x082c:  call   0841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>  ; DB_Login::_DecryptUserInfo(char*, char*, unsigned int)
08413a8f +0x0831:  xor    $0x1,%eax
08413a92 +0x0834:  test   %al,%al
08413a94 +0x0836:  je     08413afb <+0x89d>
08413a96 +0x0838:  mov    0xc(%ebp),%eax
08413a99 +0x083b:  mov    0xc0(%eax),%eax
08413a9f +0x0841:  movl   $0x0,0x4(%esp)
08413aa7 +0x0849:  mov    %eax,(%esp)
08413aaa +0x084c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08413aaf +0x0851:  mov    %eax,%ebx
08413ab1 +0x0853:  movl   $0x5,0xc(%esp)
08413ab9 +0x085b:  movl   $0x3a48,0x8(%esp)
08413ac1 +0x0863:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413ac9 +0x086b:  lea    -0xb8(%ebp),%eax
08413acf +0x0871:  mov    %eax,(%esp)
08413ad2 +0x0874:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413ad7 +0x0879:  mov    %ebx,0x8(%esp)
08413adb +0x087d:  movl   $"_DecryptUserInfo(1) ERROR m_id=%s",0x4(%esp)
08413ae3 +0x0885:  lea    -0xb8(%ebp),%eax
08413ae9 +0x088b:  mov    %eax,(%esp)
08413aec +0x088e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413af1 +0x0893:  mov    $0x0,%eax
08413af6 +0x0898:  jmp    084143a1 <+0x1143>
08413afb +0x089d:  lea    -0x176(%ebp),%eax
08413b01 +0x08a3:  mov    %eax,(%esp)
08413b04 +0x08a6:  call   0807e6f0 <_init+0xfe8>
08413b09 +0x08ab:  mov    %eax,-0x28(%ebp)
08413b0c +0x08ae:  movl   $0x21,0xc(%esp)
08413b14 +0x08b6:  lea    -0x197(%ebp),%eax
08413b1a +0x08bc:  mov    %eax,0x8(%esp)
08413b1e +0x08c0:  movl   $0x3,0x4(%esp)
08413b26 +0x08c8:  mov    -0x20(%ebp),%eax
08413b29 +0x08cb:  mov    %eax,(%esp)
08413b2c +0x08ce:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08413b31 +0x08d3:  xor    $0x1,%eax
08413b34 +0x08d6:  test   %al,%al
08413b36 +0x08d8:  je     08413b85 <+0x927>
08413b38 +0x08da:  mov    0xc(%ebp),%ebx
08413b3b +0x08dd:  movl   $0x5,0xc(%esp)
08413b43 +0x08e5:  movl   $0x3a51,0x8(%esp)
08413b4b +0x08ed:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413b53 +0x08f5:  lea    -0xa8(%ebp),%eax
08413b59 +0x08fb:  mov    %eax,(%esp)
08413b5c +0x08fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413b61 +0x0903:  mov    %ebx,0x8(%esp)
08413b65 +0x0907:  movl   $"DB_Login::GetAccountInfo, get(3) ERROR m_id=%s",0x4(%esp)
08413b6d +0x090f:  lea    -0xa8(%ebp),%eax
08413b73 +0x0915:  mov    %eax,(%esp)
08413b76 +0x0918:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413b7b +0x091d:  mov    $0x0,%eax
08413b80 +0x0922:  jmp    084143a1 <+0x1143>
08413b85 +0x0927:  movl   $0x0,-0x24(%ebp)
08413b8c +0x092e:  lea    -0x197(%ebp),%eax
08413b92 +0x0934:  movzbl (%eax),%eax
08413b95 +0x0937:  test   %al,%al
08413b97 +0x0939:  je     08413c46 <+0x9e8>
08413b9d +0x093f:  mov    0xc(%ebp),%eax
08413ba0 +0x0942:  mov    0xc0(%eax),%eax
08413ba6 +0x0948:  mov    %eax,0xc(%esp)
08413baa +0x094c:  lea    -0x1b8(%ebp),%eax
08413bb0 +0x0952:  mov    %eax,0x8(%esp)
08413bb4 +0x0956:  lea    -0x197(%ebp),%eax
08413bba +0x095c:  mov    %eax,0x4(%esp)
08413bbe +0x0960:  mov    0x8(%ebp),%eax
08413bc1 +0x0963:  mov    %eax,(%esp)
08413bc4 +0x0966:  call   0841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>  ; DB_Login::_DecryptUserInfo(char*, char*, unsigned int)
08413bc9 +0x096b:  xor    $0x1,%eax
08413bcc +0x096e:  test   %al,%al
08413bce +0x0970:  je     08413c35 <+0x9d7>
08413bd0 +0x0972:  mov    0xc(%ebp),%eax
08413bd3 +0x0975:  mov    0xc0(%eax),%eax
08413bd9 +0x097b:  movl   $0x0,0x4(%esp)
08413be1 +0x0983:  mov    %eax,(%esp)
08413be4 +0x0986:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08413be9 +0x098b:  mov    %eax,%ebx
08413beb +0x098d:  movl   $0x5,0xc(%esp)
08413bf3 +0x0995:  movl   $0x3a5a,0x8(%esp)
08413bfb +0x099d:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413c03 +0x09a5:  lea    -0x98(%ebp),%eax
08413c09 +0x09ab:  mov    %eax,(%esp)
08413c0c +0x09ae:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413c11 +0x09b3:  mov    %ebx,0x8(%esp)
08413c15 +0x09b7:  movl   $"_DecryptUserInfo(2) ERROR m_id=%s",0x4(%esp)
08413c1d +0x09bf:  lea    -0x98(%ebp),%eax
08413c23 +0x09c5:  mov    %eax,(%esp)
08413c26 +0x09c8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413c2b +0x09cd:  mov    $0x0,%eax
08413c30 +0x09d2:  jmp    084143a1 <+0x1143>
08413c35 +0x09d7:  lea    -0x1b8(%ebp),%eax
08413c3b +0x09dd:  mov    %eax,(%esp)
08413c3e +0x09e0:  call   0807e6f0 <_init+0xfe8>
08413c43 +0x09e5:  mov    %eax,-0x24(%ebp)
08413c46 +0x09e8:  lea    -0x12c(%ebp),%eax
08413c4c +0x09ee:  mov    %eax,0x8(%esp)
08413c50 +0x09f2:  movl   $0x4,0x4(%esp)
08413c58 +0x09fa:  mov    -0x20(%ebp),%eax
08413c5b +0x09fd:  mov    %eax,(%esp)
08413c5e +0x0a00:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08413c63 +0x0a05:  xor    $0x1,%eax
08413c66 +0x0a08:  test   %al,%al
08413c68 +0x0a0a:  je     08413cb7 <+0xa59>
08413c6a +0x0a0c:  mov    0xc(%ebp),%ebx
08413c6d +0x0a0f:  movl   $0x5,0xc(%esp)
08413c75 +0x0a17:  movl   $0x3a71,0x8(%esp)
08413c7d +0x0a1f:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413c85 +0x0a27:  lea    -0x88(%ebp),%eax
08413c8b +0x0a2d:  mov    %eax,(%esp)
08413c8e +0x0a30:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413c93 +0x0a35:  mov    %ebx,0x8(%esp)
08413c97 +0x0a39:  movl   $"DB_Login::GetAccountInfo, get(4) ERROR m_id=%s",0x4(%esp)
08413c9f +0x0a41:  lea    -0x88(%ebp),%eax
08413ca5 +0x0a47:  mov    %eax,(%esp)
08413ca8 +0x0a4a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413cad +0x0a4f:  mov    $0x0,%eax
08413cb2 +0x0a54:  jmp    084143a1 <+0x1143>
08413cb7 +0x0a59:  mov    0xc(%ebp),%eax
08413cba +0x0a5c:  add    $0x2184,%eax
08413cbf +0x0a61:  movl   $0x80,0xc(%esp)
08413cc7 +0x0a69:  mov    %eax,0x8(%esp)
08413ccb +0x0a6d:  movl   $0x5,0x4(%esp)
08413cd3 +0x0a75:  mov    -0x20(%ebp),%eax
08413cd6 +0x0a78:  mov    %eax,(%esp)
08413cd9 +0x0a7b:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08413cde +0x0a80:  xor    $0x1,%eax
08413ce1 +0x0a83:  test   %al,%al
08413ce3 +0x0a85:  je     08413d2c <+0xace>
08413ce5 +0x0a87:  mov    0xc(%ebp),%ebx
08413ce8 +0x0a8a:  movl   $0x5,0xc(%esp)
08413cf0 +0x0a92:  movl   $0x3a93,0x8(%esp)
08413cf8 +0x0a9a:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413d00 +0x0aa2:  lea    -0x78(%ebp),%eax
08413d03 +0x0aa5:  mov    %eax,(%esp)
08413d06 +0x0aa8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413d0b +0x0aad:  mov    %ebx,0x8(%esp)
08413d0f +0x0ab1:  movl   $"DB_Login::GetAccountInfo, get(5) ERROR m_id=%s",0x4(%esp)
08413d17 +0x0ab9:  lea    -0x78(%ebp),%eax
08413d1a +0x0abc:  mov    %eax,(%esp)
08413d1d +0x0abf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413d22 +0x0ac4:  mov    $0x0,%eax
08413d27 +0x0ac9:  jmp    084143a1 <+0x1143>
08413d2c +0x0ace:  lea    -0x2ad(%ebp),%edx
08413d32 +0x0ad4:  mov    $0x81,%ebx
08413d37 +0x0ad9:  mov    $0x0,%eax
08413d3c +0x0ade:  mov    %edx,%ecx
08413d3e +0x0ae0:  and    $0x1,%ecx
08413d41 +0x0ae3:  test   %ecx,%ecx
08413d43 +0x0ae5:  je     08413d4d <+0xaef>
08413d45 +0x0ae7:  mov    %al,(%edx)
08413d47 +0x0ae9:  add    $0x1,%edx
08413d4a +0x0aec:  sub    $0x1,%ebx
08413d4d +0x0aef:  mov    %edx,%ecx
08413d4f +0x0af1:  and    $0x2,%ecx
08413d52 +0x0af4:  test   %ecx,%ecx
08413d54 +0x0af6:  je     08413d5f <+0xb01>
08413d56 +0x0af8:  mov    %ax,(%edx)
08413d59 +0x0afb:  add    $0x2,%edx
08413d5c +0x0afe:  sub    $0x2,%ebx
08413d5f +0x0b01:  mov    %ebx,%ecx
08413d61 +0x0b03:  shr    $0x2,%ecx
08413d64 +0x0b06:  mov    %edx,%edi
08413d66 +0x0b08:  rep stos %eax,%es:(%edi)
08413d68 +0x0b0a:  mov    %edi,%edx
08413d6a +0x0b0c:  mov    %ebx,%ecx
08413d6c +0x0b0e:  and    $0x2,%ecx
08413d6f +0x0b11:  test   %ecx,%ecx
08413d71 +0x0b13:  je     08413d79 <+0xb1b>
08413d73 +0x0b15:  mov    %ax,(%edx)
08413d76 +0x0b18:  add    $0x2,%edx
08413d79 +0x0b1b:  mov    %ebx,%ecx
08413d7b +0x0b1d:  and    $0x1,%ecx
08413d7e +0x0b20:  test   %ecx,%ecx
08413d80 +0x0b22:  je     08413d87 <+0xb29>
08413d82 +0x0b24:  mov    %al,(%edx)
08413d84 +0x0b26:  add    $0x1,%edx
08413d87 +0x0b29:  lea    -0x32e(%ebp),%edx
08413d8d +0x0b2f:  mov    $0x81,%ebx
08413d92 +0x0b34:  mov    $0x0,%eax
08413d97 +0x0b39:  mov    %edx,%ecx
08413d99 +0x0b3b:  and    $0x2,%ecx
08413d9c +0x0b3e:  test   %ecx,%ecx
08413d9e +0x0b40:  je     08413da9 <+0xb4b>
08413da0 +0x0b42:  mov    %ax,(%edx)
08413da3 +0x0b45:  add    $0x2,%edx
08413da6 +0x0b48:  sub    $0x2,%ebx
08413da9 +0x0b4b:  mov    %ebx,%ecx
08413dab +0x0b4d:  shr    $0x2,%ecx
08413dae +0x0b50:  mov    %edx,%edi
08413db0 +0x0b52:  rep stos %eax,%es:(%edi)
08413db2 +0x0b54:  mov    %edi,%edx
08413db4 +0x0b56:  mov    %ebx,%ecx
08413db6 +0x0b58:  and    $0x2,%ecx
08413db9 +0x0b5b:  test   %ecx,%ecx
08413dbb +0x0b5d:  je     08413dc3 <+0xb65>
08413dbd +0x0b5f:  mov    %ax,(%edx)
08413dc0 +0x0b62:  add    $0x2,%edx
08413dc3 +0x0b65:  mov    %ebx,%ecx
08413dc5 +0x0b67:  and    $0x1,%ecx
08413dc8 +0x0b6a:  test   %ecx,%ecx
08413dca +0x0b6c:  je     08413dd1 <+0xb73>
08413dcc +0x0b6e:  mov    %al,(%edx)
08413dce +0x0b70:  add    $0x1,%edx
08413dd1 +0x0b73:  movl   $0x81,0xc(%esp)
08413dd9 +0x0b7b:  lea    -0x2ad(%ebp),%eax
08413ddf +0x0b81:  mov    %eax,0x8(%esp)
08413de3 +0x0b85:  movl   $0x6,0x4(%esp)
08413deb +0x0b8d:  mov    -0x20(%ebp),%eax
08413dee +0x0b90:  mov    %eax,(%esp)
08413df1 +0x0b93:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08413df6 +0x0b98:  xor    $0x1,%eax
08413df9 +0x0b9b:  test   %al,%al
08413dfb +0x0b9d:  je     08413e44 <+0xbe6>
08413dfd +0x0b9f:  mov    0xc(%ebp),%ebx
08413e00 +0x0ba2:  movl   $0x5,0xc(%esp)
08413e08 +0x0baa:  movl   $0x3aa6,0x8(%esp)
08413e10 +0x0bb2:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413e18 +0x0bba:  lea    -0x68(%ebp),%eax
08413e1b +0x0bbd:  mov    %eax,(%esp)
08413e1e +0x0bc0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413e23 +0x0bc5:  mov    %ebx,0x8(%esp)
08413e27 +0x0bc9:  movl   $"DB_Login::GetAccountInfo, get(6) ERROR m_id=%s",0x4(%esp)
08413e2f +0x0bd1:  lea    -0x68(%ebp),%eax
08413e32 +0x0bd4:  mov    %eax,(%esp)
08413e35 +0x0bd7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413e3a +0x0bdc:  mov    $0x0,%eax
08413e3f +0x0be1:  jmp    084143a1 <+0x1143>
08413e44 +0x0be6:  lea    -0x2ad(%ebp),%eax
08413e4a +0x0bec:  movzbl (%eax),%eax
08413e4d +0x0bef:  test   %al,%al
08413e4f +0x0bf1:  je     08413e8e <+0xc30>
08413e51 +0x0bf3:  mov    0xc(%ebp),%eax
08413e54 +0x0bf6:  mov    0xc0(%eax),%eax
08413e5a +0x0bfc:  mov    %eax,0xc(%esp)
08413e5e +0x0c00:  lea    -0x32e(%ebp),%eax
08413e64 +0x0c06:  mov    %eax,0x8(%esp)
08413e68 +0x0c0a:  lea    -0x2ad(%ebp),%eax
08413e6e +0x0c10:  mov    %eax,0x4(%esp)
08413e72 +0x0c14:  mov    0x8(%ebp),%eax
08413e75 +0x0c17:  mov    %eax,(%esp)
08413e78 +0x0c1a:  call   0841300e <_ZN8DB_Login16_DecryptUserInfoEPcS0_j>  ; DB_Login::_DecryptUserInfo(char*, char*, unsigned int)
08413e7d +0x0c1f:  xor    $0x1,%eax
08413e80 +0x0c22:  test   %al,%al
08413e82 +0x0c24:  je     08413e8e <+0xc30>
08413e84 +0x0c26:  mov    $0x0,%eax
08413e89 +0x0c2b:  jmp    084143a1 <+0x1143>
08413e8e +0x0c30:  mov    0xc(%ebp),%eax
08413e91 +0x0c33:  lea    0x2204(%eax),%edx
08413e97 +0x0c39:  lea    -0x32e(%ebp),%eax
08413e9d +0x0c3f:  mov    %eax,0x8(%esp)
08413ea1 +0x0c43:  movl   $0x7f,0x4(%esp)
08413ea9 +0x0c4b:  mov    %edx,(%esp)
08413eac +0x0c4e:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08413eb1 +0x0c53:  movl   $0x0,-0x130(%ebp)
08413ebb +0x0c5d:  lea    -0x130(%ebp),%eax
08413ec1 +0x0c63:  mov    %eax,0x8(%esp)
08413ec5 +0x0c67:  movl   $0x7,0x4(%esp)
08413ecd +0x0c6f:  mov    -0x20(%ebp),%eax
08413ed0 +0x0c72:  mov    %eax,(%esp)
08413ed3 +0x0c75:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08413ed8 +0x0c7a:  xor    $0x1,%eax
08413edb +0x0c7d:  test   %al,%al
08413edd +0x0c7f:  je     08413f3e <+0xce0>
08413edf +0x0c81:  mov    0xc(%ebp),%eax
08413ee2 +0x0c84:  mov    0xc0(%eax),%eax
08413ee8 +0x0c8a:  movl   $0x0,0x4(%esp)
08413ef0 +0x0c92:  mov    %eax,(%esp)
08413ef3 +0x0c95:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08413ef8 +0x0c9a:  mov    %eax,%ebx
08413efa +0x0c9c:  movl   $0x5,0xc(%esp)
08413f02 +0x0ca4:  movl   $0x3ac0,0x8(%esp)
08413f0a +0x0cac:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413f12 +0x0cb4:  lea    -0x58(%ebp),%eax
08413f15 +0x0cb7:  mov    %eax,(%esp)
08413f18 +0x0cba:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413f1d +0x0cbf:  mov    %ebx,0x8(%esp)
08413f21 +0x0cc3:  movl   $"DB_Login::GetAccountInfo, get(7) ERROR m_id=%s",0x4(%esp)
08413f29 +0x0ccb:  lea    -0x58(%ebp),%eax
08413f2c +0x0cce:  mov    %eax,(%esp)
08413f2f +0x0cd1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413f34 +0x0cd6:  mov    $0x0,%eax
08413f39 +0x0cdb:  jmp    084143a1 <+0x1143>
08413f3e +0x0ce0:  mov    -0x130(%ebp),%eax
08413f44 +0x0ce6:  test   %eax,%eax
08413f46 +0x0ce8:  setne  %dl
08413f49 +0x0ceb:  mov    0xc(%ebp),%eax
08413f4c +0x0cee:  mov    %dl,0x38dd(%eax)
08413f52 +0x0cf4:  movl   $0x0,-0x134(%ebp)
08413f5c +0x0cfe:  lea    -0x134(%ebp),%eax
08413f62 +0x0d04:  mov    %eax,0x8(%esp)
08413f66 +0x0d08:  movl   $0x8,0x4(%esp)
08413f6e +0x0d10:  mov    -0x20(%ebp),%eax
08413f71 +0x0d13:  mov    %eax,(%esp)
08413f74 +0x0d16:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08413f79 +0x0d1b:  xor    $0x1,%eax
08413f7c +0x0d1e:  test   %al,%al
08413f7e +0x0d20:  je     08413fd5 <+0xd77>
08413f80 +0x0d22:  mov    0xc(%ebp),%eax
08413f83 +0x0d25:  mov    0xc0(%eax),%eax
08413f89 +0x0d2b:  movl   $0x0,0x4(%esp)
08413f91 +0x0d33:  mov    %eax,(%esp)
08413f94 +0x0d36:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08413f99 +0x0d3b:  mov    %eax,%ebx
08413f9b +0x0d3d:  movl   $0x5,0xc(%esp)
08413fa3 +0x0d45:  movl   $0x3ae6,0x8(%esp)
08413fab +0x0d4d:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08413fb3 +0x0d55:  lea    -0x48(%ebp),%eax
08413fb6 +0x0d58:  mov    %eax,(%esp)
08413fb9 +0x0d5b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08413fbe +0x0d60:  mov    %ebx,0x8(%esp)
08413fc2 +0x0d64:  movl   $"DB_Login::GetAccountInfo, get(9) ERROR m_id=%s",0x4(%esp)
08413fca +0x0d6c:  lea    -0x48(%ebp),%eax
08413fcd +0x0d6f:  mov    %eax,(%esp)
08413fd0 +0x0d72:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08413fd5 +0x0d77:  mov    -0x134(%ebp),%edx
08413fdb +0x0d7d:  mov    0xc(%ebp),%eax
08413fde +0x0d80:  mov    %edx,0xd0(%eax)
08413fe4 +0x0d86:  mov    0xc(%ebp),%eax
08413fe7 +0x0d89:  lea    0x2284(%eax),%edx
08413fed +0x0d8f:  mov    -0x24(%ebp),%eax
08413ff0 +0x0d92:  mov    %eax,0x10(%esp)
08413ff4 +0x0d96:  mov    -0x28(%ebp),%eax
08413ff7 +0x0d99:  mov    %eax,0xc(%esp)
08413ffb +0x0d9d:  movl   $"%d%d",0x8(%esp)
08414003 +0x0da5:  movl   $0x10,0x4(%esp)
0841400b +0x0dad:  mov    %edx,(%esp)
0841400e +0x0db0:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
08414013 +0x0db5:  mov    -0x28(%ebp),%eax
08414016 +0x0db8:  mov    %eax,-0x3cc(%ebp)
0841401c +0x0dbe:  mov    $0xd1b71759,%edx
08414021 +0x0dc3:  mov    -0x3cc(%ebp),%eax
08414027 +0x0dc9:  mul    %edx
08414029 +0x0dcb:  mov    %edx,%eax
0841402b +0x0dcd:  shr    $0xd,%eax
0841402e +0x0dd0:  mov    %eax,-0x28(%ebp)
08414031 +0x0dd3:  mov    -0x24(%ebp),%edx
08414034 +0x0dd6:  mov    %edx,-0x3cc(%ebp)
0841403a +0x0ddc:  mov    $0x431bde83,%edx
0841403f +0x0de1:  mov    -0x3cc(%ebp),%eax
08414045 +0x0de7:  mul    %edx
08414047 +0x0de9:  mov    %edx,%eax
08414049 +0x0deb:  shr    $0x12,%eax
0841404c +0x0dee:  mov    %eax,-0x24(%ebp)
0841404f +0x0df1:  cmpl   $0x2,-0x24(%ebp)
08414053 +0x0df5:  jbe    08414069 <+0xe0b>
08414055 +0x0df7:  mov    -0x28(%ebp),%eax
08414058 +0x0dfa:  lea    0x7d0(%eax),%edx
0841405e +0x0e00:  mov    0xc(%ebp),%eax
08414061 +0x0e03:  mov    %edx,0xc8(%eax)
08414067 +0x0e09:  jmp    0841407b <+0xe1d>
08414069 +0x0e0b:  mov    -0x28(%ebp),%eax
0841406c +0x0e0e:  lea    0x76c(%eax),%edx
08414072 +0x0e14:  mov    0xc(%ebp),%eax
08414075 +0x0e17:  mov    %edx,0xc8(%eax)
0841407b +0x0e1d:  mov    -0x12c(%ebp),%edx
08414081 +0x0e23:  mov    %edx,-0x3cc(%ebp)
08414087 +0x0e29:  mov    $0x51eb851f,%edx
0841408c +0x0e2e:  mov    -0x3cc(%ebp),%eax
08414092 +0x0e34:  mul    %edx
08414094 +0x0e36:  shr    $0x5,%edx
08414097 +0x0e39:  mov    0xc(%ebp),%eax
0841409a +0x0e3c:  mov    %edx,0xcc(%eax)
084140a0 +0x0e42:  movl   $0xffffffff,-0x1c4(%ebp)
084140aa +0x0e4c:  mov    -0x12c(%ebp),%edx
084140b0 +0x0e52:  mov    %edx,-0x3cc(%ebp)
084140b6 +0x0e58:  mov    $0x431bde83,%edx
084140bb +0x0e5d:  mov    -0x3cc(%ebp),%eax
084140c1 +0x0e63:  mul    %edx
084140c3 +0x0e65:  mov    %edx,%eax
084140c5 +0x0e67:  shr    $0x12,%eax
084140c8 +0x0e6a:  sub    $0x76c,%eax
084140cd +0x0e6f:  mov    %eax,-0x1d0(%ebp)
084140d3 +0x0e75:  mov    -0x12c(%ebp),%ecx
084140d9 +0x0e7b:  mov    $0x431bde83,%edx
084140de +0x0e80:  mov    %ecx,%eax
084140e0 +0x0e82:  mul    %edx
084140e2 +0x0e84:  mov    %edx,%eax
084140e4 +0x0e86:  shr    $0x12,%eax
084140e7 +0x0e89:  imul   $0xf4240,%eax,%eax
084140ed +0x0e8f:  mov    %ecx,%edx
084140ef +0x0e91:  sub    %eax,%edx
084140f1 +0x0e93:  mov    %edx,%eax
084140f3 +0x0e95:  mov    %eax,-0x12c(%ebp)
084140f9 +0x0e9b:  mov    -0x12c(%ebp),%edi
084140ff +0x0ea1:  mov    %edi,-0x3cc(%ebp)
08414105 +0x0ea7:  mov    $0xd1b71759,%edx
0841410a +0x0eac:  mov    -0x3cc(%ebp),%eax
08414110 +0x0eb2:  mul    %edx
08414112 +0x0eb4:  mov    %edx,%eax
08414114 +0x0eb6:  shr    $0xd,%eax
08414117 +0x0eb9:  sub    $0x1,%eax
0841411a +0x0ebc:  mov    %eax,-0x1d4(%ebp)
08414120 +0x0ec2:  mov    -0x12c(%ebp),%ecx
08414126 +0x0ec8:  mov    $0xd1b71759,%edx
0841412b +0x0ecd:  mov    %ecx,%eax
0841412d +0x0ecf:  mul    %edx
0841412f +0x0ed1:  mov    %edx,%eax
08414131 +0x0ed3:  shr    $0xd,%eax
08414134 +0x0ed6:  imul   $0x2710,%eax,%eax
0841413a +0x0edc:  mov    %ecx,%edx
0841413c +0x0ede:  sub    %eax,%edx
0841413e +0x0ee0:  mov    %edx,%eax
08414140 +0x0ee2:  mov    %eax,-0x12c(%ebp)
08414146 +0x0ee8:  mov    -0x12c(%ebp),%edi
0841414c +0x0eee:  mov    %edi,-0x3cc(%ebp)
08414152 +0x0ef4:  mov    $0x51eb851f,%edx
08414157 +0x0ef9:  mov    -0x3cc(%ebp),%eax
0841415d +0x0eff:  mul    %edx
0841415f +0x0f01:  mov    %edx,%eax
08414161 +0x0f03:  shr    $0x5,%eax
08414164 +0x0f06:  mov    %eax,-0x1d8(%ebp)
0841416a +0x0f0c:  mov    -0x12c(%ebp),%ecx
08414170 +0x0f12:  mov    $0x51eb851f,%edx
08414175 +0x0f17:  mov    %ecx,%eax
08414177 +0x0f19:  mul    %edx
08414179 +0x0f1b:  mov    %edx,%eax
0841417b +0x0f1d:  shr    $0x5,%eax
0841417e +0x0f20:  imul   $0x64,%eax,%eax
08414181 +0x0f23:  mov    %ecx,%edx
08414183 +0x0f25:  sub    %eax,%edx
08414185 +0x0f27:  mov    %edx,%eax
08414187 +0x0f29:  mov    %eax,-0x12c(%ebp)
0841418d +0x0f2f:  mov    -0x12c(%ebp),%eax
08414193 +0x0f35:  mov    %eax,-0x1dc(%ebp)
08414199 +0x0f3b:  movl   $0x0,-0x1e0(%ebp)
084141a3 +0x0f45:  movl   $0x0,-0x1e4(%ebp)
084141ad +0x0f4f:  lea    -0x1e4(%ebp),%eax
084141b3 +0x0f55:  mov    %eax,(%esp)
084141b6 +0x0f58:  call   0807e820 <_init+0x1118>
084141bb +0x0f5d:  mov    0xc(%ebp),%edx
084141be +0x0f60:  mov    %eax,0xd4(%edx)
084141c4 +0x0f66:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084141cb +0x0f6d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084141d0 +0x0f72:  mov    %eax,-0x1c(%ebp)
084141d3 +0x0f75:  mov    -0x22c(%ebp),%eax
084141d9 +0x0f7b:  mov    %eax,%ecx
084141db +0x0f7d:  mov    -0x1ec(%ebp),%edx
084141e1 +0x0f83:  mov    0xc(%ebp),%eax
084141e4 +0x0f86:  mov    0x3a30(%eax),%eax
084141ea +0x0f8c:  mov    %ecx,0xc(%esp)
084141ee +0x0f90:  mov    %edx,0x8(%esp)
084141f2 +0x0f94:  mov    -0x1c(%ebp),%edx
084141f5 +0x0f97:  mov    %edx,0x4(%esp)
084141f9 +0x0f9b:  mov    %eax,(%esp)
084141fc +0x0f9e:  call   08173080 <_ZN6Taiwan20GarenaCheckTimeStampEjjjj>  ; Taiwan::GarenaCheckTimeStamp(unsigned int, unsigned int, unsigned int, unsigned int)
08414201 +0x0fa3:  xor    $0x1,%eax
08414204 +0x0fa6:  test   %al,%al
08414206 +0x0fa8:  je     08414313 <+0x10b5>
0841420c +0x0fae:  mov    0xc(%ebp),%eax
0841420f +0x0fb1:  mov    %eax,0x4(%esp)
08414213 +0x0fb5:  mov    0x8(%ebp),%eax
08414216 +0x0fb8:  mov    %eax,(%esp)
08414219 +0x0fbb:  call   084143ac <_ZN8DB_Login15GetWhiteAccountEP14SIG_LOGIN_DATA>  ; DB_Login::GetWhiteAccount(SIG_LOGIN_DATA*)
0841421e +0x0fc0:  test   %al,%al
08414220 +0x0fc2:  je     08414298 <+0x103a>
08414222 +0x0fc4:  mov    -0x22c(%ebp),%edi
08414228 +0x0fca:  mov    -0x1ec(%ebp),%esi
0841422e +0x0fd0:  mov    0xc(%ebp),%eax
08414231 +0x0fd3:  mov    0x3a30(%eax),%ebx
08414237 +0x0fd9:  mov    0xc(%ebp),%eax
0841423a +0x0fdc:  mov    0xc0(%eax),%eax
08414240 +0x0fe2:  movl   $0x0,0x4(%esp)
08414248 +0x0fea:  mov    %eax,(%esp)
0841424b +0x0fed:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414250 +0x0ff2:  mov    %edi,0x24(%esp)
08414254 +0x0ff6:  mov    %esi,0x20(%esp)
08414258 +0x0ffa:  mov    -0x1c(%ebp),%edx
0841425b +0x0ffd:  mov    %edx,0x1c(%esp)
0841425f +0x1001:  mov    %ebx,0x18(%esp)
08414263 +0x1005:  mov    %eax,0x14(%esp)
08414267 +0x1009:  movl   $"[Taiwan, Auth] White Account Success Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)",0x10(%esp)
0841426f +0x1011:  movl   $0x3b0f,0xc(%esp)
08414277 +0x1019:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0841427f +0x1021:  movl   $"DBThread.cpp",0x4(%esp)
08414287 +0x1029:  movl   $0x1,(%esp)
0841428e +0x1030:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08414293 +0x1035:  jmp    0841439c <+0x113e>
08414298 +0x103a:  mov    -0x22c(%ebp),%edi
0841429e +0x1040:  mov    -0x1ec(%ebp),%esi
084142a4 +0x1046:  mov    0xc(%ebp),%eax
084142a7 +0x1049:  mov    0x3a30(%eax),%ebx
084142ad +0x104f:  mov    0xc(%ebp),%eax
084142b0 +0x1052:  mov    0xc0(%eax),%eax
084142b6 +0x1058:  movl   $0x0,0x4(%esp)
084142be +0x1060:  mov    %eax,(%esp)
084142c1 +0x1063:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084142c6 +0x1068:  mov    %edi,0x24(%esp)
084142ca +0x106c:  mov    %esi,0x20(%esp)
084142ce +0x1070:  mov    -0x1c(%ebp),%edx
084142d1 +0x1073:  mov    %edx,0x1c(%esp)
084142d5 +0x1077:  mov    %ebx,0x18(%esp)
084142d9 +0x107b:  mov    %eax,0x14(%esp)
084142dd +0x107f:  movl   $"[Taiwan, Auth] Fail Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)",0x10(%esp)
084142e5 +0x1087:  movl   $0x3b14,0xc(%esp)
084142ed +0x108f:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
084142f5 +0x1097:  movl   $"DBThread.cpp",0x4(%esp)
084142fd +0x109f:  movl   $0x1,(%esp)
08414304 +0x10a6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08414309 +0x10ab:  mov    $0x0,%eax
0841430e +0x10b0:  jmp    084143a1 <+0x1143>
08414313 +0x10b5:  mov    -0x22c(%ebp),%edi
08414319 +0x10bb:  mov    %edi,-0x3bc(%ebp)
0841431f +0x10c1:  mov    -0x1ec(%ebp),%edi
08414325 +0x10c7:  mov    0xc(%ebp),%eax
08414328 +0x10ca:  mov    0x3a30(%eax),%esi
0841432e +0x10d0:  mov    0xc(%ebp),%eax
08414331 +0x10d3:  mov    0xc0(%eax),%eax
08414337 +0x10d9:  movl   $0x0,0x4(%esp)
0841433f +0x10e1:  mov    %eax,(%esp)
08414342 +0x10e4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414347 +0x10e9:  mov    %eax,%ebx
08414349 +0x10eb:  movl   $0x0,0xc(%esp)
08414351 +0x10f3:  movl   $0x3b1b,0x8(%esp)
08414359 +0x10fb:  movl   $&_ZZN8DB_Login14GetAccountInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08414361 +0x1103:  lea    -0x38(%ebp),%eax
08414364 +0x1106:  mov    %eax,(%esp)
08414367 +0x1109:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841436c +0x110e:  mov    -0x3bc(%ebp),%eax
08414372 +0x1114:  mov    %eax,0x18(%esp)
08414376 +0x1118:  mov    %edi,0x14(%esp)
0841437a +0x111c:  mov    -0x1c(%ebp),%eax
0841437d +0x111f:  mov    %eax,0x10(%esp)
08414381 +0x1123:  mov    %esi,0xc(%esp)
08414385 +0x1127:  mov    %ebx,0x8(%esp)
08414389 +0x112b:  movl   $"[Taiwan, Auth] Success Token reuse login. (mid:%s, token_time:%u, current_current:%u, login_time:%u, last_play_time:%u)",0x4(%esp)
08414391 +0x1133:  lea    -0x38(%ebp),%eax
08414394 +0x1136:  mov    %eax,(%esp)
08414397 +0x1139:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841439c +0x113e:  mov    $0x1,%eax
084143a1 +0x1143:  add    $0x3fc,%esp
084143a7 +0x1149:  pop    %ebx
084143a8 +0x114a:  pop    %esi
084143a9 +0x114b:  pop    %edi
084143aa +0x114c:  pop    %ebp
084143ab +0x114d:  ret
```

## 反编译 C

```c
// DB_Login::GetAccountInfo @ 0x841325e

/* WARNING: Removing unreachable block (ram,0x084132af) */
/* DB_Login::GetAccountInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetAccountInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this_00;
  long lVar5;
  time_t tVar6;
  uint uVar7;
  undefined4 *puVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  longlong lVar13;
  char acStackY_131a [3854];
  undefined1 local_3b6 [132];
  char local_332 [129];
  char local_2b1;
  char local_2b0 [128];
  uint local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  SIG_LOGIN_DATA local_220;
  undefined4 local_21c;
  char acStack_218 [20];
  SIG_LOGIN_DATA local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  SIG_LOGIN_DATA local_1f4;
  SIG_LOGIN_DATA local_1f3;
  uint local_1f0;
  tm local_1e8;
  char local_1bc [33];
  char local_19b;
  char local_19a [32];
  char local_17a [33];
  char local_159;
  char local_158 [32];
  uint local_138;
  uint local_134;
  uint local_130;
  cMyTrace local_12c [16];
  cMyTrace local_11c [16];
  cMyTrace local_10c [16];
  cMyTrace local_fc [16];
  cMyTrace local_ec [16];
  cMyTrace local_dc [16];
  cMyTrace local_cc [16];
  cMyTrace local_bc [16];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  uint local_2c;
  uint local_28;
  MySQL *local_24;
  uint local_20;
  
  bVar12 = 0;
  puVar8 = (undefined4 *)local_3b6;
  uVar10 = 0x84;
  bVar11 = ((uint)puVar8 & 2) != 0;
  if (bVar11) {
    local_3b6._0_2_ = 0;
    puVar8 = (undefined4 *)(local_3b6 + 2);
    uVar10 = 0x82;
  }
  for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  if (bVar11) {
    *(undefined2 *)puVar8 = 0;
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  MySQL::set_query(local_24,
                   "seLect m_id, passwd,first_ssn, second_ssn,DATE_FORMAT(from_unixtime(reg_date),\'%%Y%%m%%d%%H\'),user_name,email,hangame_flag,reg_date from  member_info  where  user_id=\'%s\' and hangame_flag=%d"
                   ,param_1,(uint)(byte)param_1[0xa0]);
  cVar1 = MySQL::exec(local_24,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_24);
    if ((iVar3 == 0) && (cVar1 = CreateAccount(this,param_1,local_24), cVar1 != '\x01')) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
    }
    if (bVar11) {
      cMyTrace::cMyTrace(local_11c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3986,0);
      cMyTrace::operator()(local_11c,"[Taiwan, Auth] Fail create account. id=%s",param_1);
      uVar2 = 0;
    }
    else {
      cVar1 = MySQL::fetch(local_24);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_uint(local_24,0,(uint *)(param_1 + 0xc0));
        if (cVar1 == '\x01') {
          iVar3 = MySQL::get_n_rows(local_24);
          if (iVar3 == 1) {
            cVar1 = MySQL::get_str(local_24,1,local_3b6,0x84);
            if (cVar1 == '\x01') {
              WongWork::CSimpleSSO::stOutputData_t::stOutputData_t((stOutputData_t *)&local_230);
              cVar1 = WongWork::CSimpleSSO::checkValidPassword
                                (GlobalData::s_psimpleSSO,*(uint *)(param_1 + 0xc0),local_3b6,
                                 (char *)(param_1 + 0x18),(stOutputData_t *)&local_230);
              if (cVar1 == '\x01') {
                *(uint *)(param_1 + 0x3958) = local_230;
                *(undefined4 *)(param_1 + 0x3950) = local_22c;
                *(undefined4 *)(param_1 + 0x3954) = local_228;
                *(undefined4 *)(param_1 + 0x3960) = local_224;
                param_1[0x3964] = local_220;
                *(undefined4 *)(param_1 + 0x3968) = local_21c;
                *(undefined4 *)(param_1 + 0x396c) = local_1fc;
                *(undefined4 *)(param_1 + 0x3970) = local_1f8;
                memset(param_1 + 0x3974,0,0x28);
                this_00 = (GameWorld *)G_GameWorld();
                cVar1 = GameWorld::IsSchoolPvPChannel(this_00);
                if ((cVar1 == '\0') || (*(int *)(param_1 + 0x396c) == 0)) {
                  bVar11 = false;
                }
                else {
                  bVar11 = true;
                }
                if (bVar11) {
                  GetSchoolName(this,*(int *)(param_1 + 0x396c),(char *)(param_1 + 0x3974));
                  GetBadgeCount(this,param_1);
                }
                param_1[0x39a2] = local_1f4;
                param_1[0x39dc] = local_204;
                strncpy((char *)(param_1 + 0x3a3a),acStack_218,0x10);
                *(undefined4 *)(param_1 + 0x395c) = local_200;
                lVar5 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                uVar10 = local_230;
                iVar3 = G_CEnvironment();
                cVar1 = CheckDailyScheduleTime(*(int *)(iVar3 + 0x37c),uVar10,lVar5);
                if (cVar1 != '\0') {
                  *(undefined4 *)(param_1 + 0x395c) = 0;
                }
                param_1[0x3f10] = local_1f3;
                pcVar9 = &local_159;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 1) != 0;
                if (bVar11) {
                  local_159 = '\0';
                  pcVar9 = local_158;
                  uVar10 = 0x20;
                }
                if (((uint)pcVar9 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                  uVar10 = uVar10 - 2;
                }
                for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if ((uVar10 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                if (!bVar11) {
                  *pcVar9 = '\0';
                }
                pcVar9 = local_17a;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 2) != 0;
                if (bVar11) {
                  local_17a[0] = '\0';
                  local_17a[1] = '\0';
                  pcVar9 = local_17a + 2;
                  uVar10 = 0x1f;
                }
                for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if (bVar11) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                *pcVar9 = '\0';
                pcVar9 = &local_19b;
                uVar10 = 0x21;
                bVar11 = ((uint)pcVar9 & 1) != 0;
                if (bVar11) {
                  local_19b = '\0';
                  pcVar9 = local_19a;
                  uVar10 = 0x20;
                }
                if (((uint)pcVar9 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                  uVar10 = uVar10 - 2;
                }
                for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                if ((uVar10 & 2) != 0) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9 = pcVar9 + 2;
                }
                if (!bVar11) {
                  *pcVar9 = '\0';
                }
                pcVar9 = local_1bc;
                for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
                  pcVar9[0] = '\0';
                  pcVar9[1] = '\0';
                  pcVar9[2] = '\0';
                  pcVar9[3] = '\0';
                  pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                }
                *pcVar9 = '\0';
                cVar1 = MySQL::get_str(local_24,2,&local_159,0x21);
                if (cVar1 == '\x01') {
                  local_2c = 0;
                  if (local_159 != '\0') {
                    cVar1 = _DecryptUserInfo(this,&local_159,local_17a,*(uint *)(param_1 + 0xc0));
                    if (cVar1 != '\x01') {
                      uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                      cMyTrace::cMyTrace(local_bc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                         0x3a48,5);
                      cMyTrace::operator()(local_bc,"_DecryptUserInfo(1) ERROR m_id=%s",uVar2);
                      return 0;
                    }
                    local_2c = atoi(local_17a);
                  }
                  cVar1 = MySQL::get_str(local_24,3,&local_19b,0x21);
                  if (cVar1 == '\x01') {
                    local_28 = 0;
                    if (local_19b != '\0') {
                      cVar1 = _DecryptUserInfo(this,&local_19b,local_1bc,*(uint *)(param_1 + 0xc0));
                      if (cVar1 != '\x01') {
                        uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                        cMyTrace::cMyTrace(local_9c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)"
                                           ,0x3a5a,5);
                        cMyTrace::operator()(local_9c,"_DecryptUserInfo(2) ERROR m_id=%s",uVar2);
                        return 0;
                      }
                      local_28 = atoi(local_1bc);
                    }
                    cVar1 = MySQL::get_uint(local_24,4,&local_130);
                    if (cVar1 == '\x01') {
                      cVar1 = MySQL::get_str(local_24,5,(char *)(param_1 + 0x2184),0x80);
                      if (cVar1 == '\x01') {
                        pcVar9 = &local_2b1;
                        uVar10 = 0x81;
                        bVar11 = ((uint)pcVar9 & 1) != 0;
                        if (bVar11) {
                          local_2b1 = '\0';
                          pcVar9 = local_2b0;
                          uVar10 = 0x80;
                        }
                        if (((uint)pcVar9 & 2) != 0) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                          uVar10 = uVar10 - 2;
                        }
                        for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9[2] = '\0';
                          pcVar9[3] = '\0';
                          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                        }
                        if ((uVar10 & 2) != 0) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                        }
                        if (!bVar11) {
                          *pcVar9 = '\0';
                        }
                        pcVar9 = local_332;
                        uVar10 = 0x81;
                        bVar11 = ((uint)pcVar9 & 2) != 0;
                        if (bVar11) {
                          local_332[0] = '\0';
                          local_332[1] = '\0';
                          pcVar9 = local_332 + 2;
                          uVar10 = 0x7f;
                        }
                        for (uVar10 = uVar10 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9[2] = '\0';
                          pcVar9[3] = '\0';
                          pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
                        }
                        if (bVar11) {
                          pcVar9[0] = '\0';
                          pcVar9[1] = '\0';
                          pcVar9 = pcVar9 + 2;
                        }
                        *pcVar9 = '\0';
                        cVar1 = MySQL::get_str(local_24,6,&local_2b1,0x81);
                        if (cVar1 == '\x01') {
                          if ((local_2b1 == '\0') ||
                             (cVar1 = _DecryptUserInfo(this,&local_2b1,local_332,
                                                       *(uint *)(param_1 + 0xc0)), cVar1 == '\x01'))
                          {
                            OS_API::snprintf((char *)(param_1 + 0x2204),0x7f,local_332);
                            local_134 = 0;
                            cVar1 = MySQL::get_uint(local_24,7,&local_134);
                            if (cVar1 == '\x01') {
                              param_1[0x38dd] = (SIG_LOGIN_DATA)(local_134 != 0);
                              local_138 = 0;
                              cVar1 = MySQL::get_uint(local_24,8,&local_138);
                              if (cVar1 != '\x01') {
                                uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                cMyTrace::cMyTrace(local_4c,
                                                  "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                  0x3ae6,5);
                                cMyTrace::operator()
                                          (local_4c,"DB_Login::GetAccountInfo, get(9) ERROR m_id=%s"
                                           ,uVar2);
                              }
                              *(uint *)(param_1 + 0xd0) = local_138;
                              OS_API::snprintf((char *)(param_1 + 0x2284),0x10,"%d%d",local_2c,
                                               local_28);
                              local_2c = local_2c / 10000;
                              local_28 = local_28 / 1000000;
                              if (local_28 < 3) {
                                *(uint *)(param_1 + 200) = local_2c + 0x76c;
                              }
                              else {
                                *(uint *)(param_1 + 200) = local_2c + 2000;
                              }
                              *(uint *)(param_1 + 0xcc) = local_130 / 100;
                              local_1e8.tm_isdst = -1;
                              local_1e8.tm_year = local_130 / 1000000 - 0x76c;
                              local_1e8.tm_mon = (local_130 % 1000000) / 10000 - 1;
                              local_1e8.tm_hour = (local_130 % 1000000) % 10000;
                              local_1e8.tm_mday = (uint)local_1e8.tm_hour / 100;
                              local_1e8.tm_hour = (uint)local_1e8.tm_hour % 100;
                              local_1e8.tm_min = 0;
                              local_1e8.tm_sec = 0;
                              local_130 = local_1e8.tm_hour;
                              tVar6 = mktime(&local_1e8);
                              *(time_t *)(param_1 + 0xd4) = tVar6;
                              local_20 = CSystemTime::getCurSec
                                                   ((CSystemTime *)GlobalData::s_systemTime_);
                              cVar1 = Taiwan::GarenaCheckTimeStamp
                                                (*(uint *)(param_1 + 0x3a30),local_20,local_1f0,
                                                 local_230);
                              if (cVar1 == '\x01') {
                                uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                cMyTrace::cMyTrace(local_3c,
                                                  "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                  0x3b1b,0);
                                cMyTrace::operator()
                                          (local_3c,
                                           "[Taiwan, Auth] Success Token reuse login. (mid:%s, token_time:%u, current_current:%u, login_time:%u, last_play_time:%u)"
                                           ,uVar4,uVar2,local_20,local_1f0,local_230);
                              }
                              else {
                                cVar1 = GetWhiteAccount(this,param_1);
                                if (cVar1 == '\0') {
                                  uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                  uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                  LogManager::logFormat
                                            (1,"DBThread.cpp",
                                             "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3b14
                                             ,
                                             "[Taiwan, Auth] Fail Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)"
                                             ,uVar4,uVar2,local_20,local_1f0,local_230);
                                  return 0;
                                }
                                uVar2 = *(undefined4 *)(param_1 + 0x3a30);
                                uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                                LogManager::logFormat
                                          (1,"DBThread.cpp",
                                           "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3b0f,
                                           "[Taiwan, Auth] White Account Success Token reuse login. (mid:%s, token_time:%u, current_time:%u, login_time:%u, last_play_time:%u)"
                                           ,uVar4,uVar2,local_20,local_1f0,local_230);
                              }
                              uVar2 = 1;
                            }
                            else {
                              uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                              cMyTrace::cMyTrace(local_5c,
                                                 "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                                 0x3ac0,5);
                              cMyTrace::operator()
                                        (local_5c,"DB_Login::GetAccountInfo, get(7) ERROR m_id=%s",
                                         uVar2);
                              uVar2 = 0;
                            }
                          }
                          else {
                            uVar2 = 0;
                          }
                        }
                        else {
                          cMyTrace::cMyTrace(local_6c,
                                             "bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x3aa6
                                             ,5);
                          cMyTrace::operator()
                                    (local_6c,"DB_Login::GetAccountInfo, get(6) ERROR m_id=%s",
                                     param_1);
                          uVar2 = 0;
                        }
                      }
                      else {
                        cMyTrace::cMyTrace(local_7c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)"
                                           ,0x3a93,5);
                        cMyTrace::operator()
                                  (local_7c,"DB_Login::GetAccountInfo, get(5) ERROR m_id=%s",param_1
                                  );
                        uVar2 = 0;
                      }
                    }
                    else {
                      cMyTrace::cMyTrace(local_8c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                         0x3a71,5);
                      cMyTrace::operator()
                                (local_8c,"DB_Login::GetAccountInfo, get(4) ERROR m_id=%s",param_1);
                      uVar2 = 0;
                    }
                  }
                  else {
                    cMyTrace::cMyTrace(local_ac,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                       0x3a51,5);
                    cMyTrace::operator()
                              (local_ac,"DB_Login::GetAccountInfo, get(3) ERROR m_id=%s",param_1);
                    uVar2 = 0;
                  }
                }
                else {
                  cMyTrace::cMyTrace(local_cc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",
                                     0x3a3f,5);
                  cMyTrace::operator()
                            (local_cc,"DB_Login::GetAccountInfo, get(2) ERROR m_id=%s",param_1);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
                LogManager::logFormat
                          (1,"DBThread.cpp","bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39da,
                           "[Taiwan, Auth] Fail query member_login. (mid:%s)",uVar2);
                uVar2 = 0;
              }
            }
            else {
              cMyTrace::cMyTrace(local_dc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39c8,5)
              ;
              cMyTrace::operator()
                        (local_dc,"DB_Login::GetAccountInfo, get(1) ERROR m_id=%s",param_1);
              uVar2 = 0;
            }
          }
          else {
            uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
            uVar4 = MySQL::get_n_rows(local_24);
            MySQL::set_query(local_24,"upDate member_abnomal set overlab_count=%d where user_id=%s",
                             uVar4,uVar2);
            cVar1 = MySQL::exec(local_24,true);
            if ((cVar1 == '\x01') && (lVar13 = MySQL::getAffectedRowCount(local_24), lVar13 != 0)) {
              bVar11 = false;
            }
            else {
              bVar11 = true;
            }
            if (bVar11) {
              uVar2 = MySQL::get_n_rows(local_24);
              uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
              MySQL::set_query(local_24,
                               "inSert into member_abnomal(user_id, overlab_count) values(%s,%d)",
                               uVar4,uVar2);
              MySQL::exec(local_24,true);
            }
            cMyTrace::cMyTrace(local_ec,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39c2,5);
            cMyTrace::operator()
                      (local_ec,"DB_Login::GetAccountInfo, get_n_rows()!=1 ERROR m_id=%s",param_1);
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_fc,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39b5,5);
          cMyTrace::operator()(local_fc,"DB_Login::GetAccountInfo, get(0) ERROR m_id=%s",param_1);
          uVar2 = 0;
        }
      }
      else {
        cMyTrace::cMyTrace(local_10c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x39af,5);
        cMyTrace::operator()(local_10c,"DB_Login::GetAccountInfo, fetch() ERROR m_id=%s",param_1);
        uVar2 = 0;
      }
    }
  }
  else {
    cMyTrace::cMyTrace(local_12c,"bool DB_Login::GetAccountInfo(SIG_LOGIN_DATA*)",0x397f,5);
    cMyTrace::operator()(local_12c,"DB_Login::GetAccountInfo, exec() ERROR m_id=%s",param_1);
    uVar2 = 0;
  }
  return uVar2;
}
```
