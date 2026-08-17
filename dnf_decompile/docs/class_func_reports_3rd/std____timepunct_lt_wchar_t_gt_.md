# std____timepunct_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _M_initialize_timepunct

```asm
// === 08721450 std::__timepunct<wchar_t>::_M_initialize_timepunct  [0x08721450-0x8721c8f] ===
 8721450:	55                   	push   %ebp
 8721451:	89 e5                	mov    %esp,%ebp
 8721453:	53                   	push   %ebx
 8721454:	83 ec 14             	sub    $0x14,%esp
 8721457:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872145a:	8b 53 08             	mov    0x8(%ebx),%edx
 872145d:	85 d2                	test   %edx,%edx
 872145f:	0f 84 7b 06 00 00    	je     8721ae0 <_ZNSt11__timepunctIwE23_M_initialize_timepunctEP15__locale_struct+0x690>
 8721465:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721468:	85 c0                	test   %eax,%eax
 872146a:	0f 84 e0 04 00 00    	je     8721950 <_ZNSt11__timepunctIwE23_M_initialize_timepunctEP15__locale_struct+0x500>
 8721470:	8d 45 0c             	lea    0xc(%ebp),%eax
 8721473:	89 04 24             	mov    %eax,(%esp)
 8721476:	e8 95 16 00 00       	call   8722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>
 872147b:	89 43 0c             	mov    %eax,0xc(%ebx)
 872147e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721481:	c7 04 24 5d 00 02 00 	movl   $0x2005d,(%esp)
 8721488:	89 44 24 04          	mov    %eax,0x4(%esp)
 872148c:	e8 7f c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721491:	8b 53 08             	mov    0x8(%ebx),%edx
 8721494:	89 42 08             	mov    %eax,0x8(%edx)
 8721497:	8b 45 0c             	mov    0xc(%ebp),%eax
 872149a:	c7 04 24 61 00 02 00 	movl   $0x20061,(%esp)
 87214a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 87214a5:	e8 66 c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87214aa:	8b 53 08             	mov    0x8(%ebx),%edx
 87214ad:	89 42 0c             	mov    %eax,0xc(%edx)
 87214b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87214b3:	c7 04 24 5e 00 02 00 	movl   $0x2005e,(%esp)
 87214ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 87214be:	e8 4d c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87214c3:	8b 53 08             	mov    0x8(%ebx),%edx
 87214c6:	89 42 10             	mov    %eax,0x10(%edx)
 87214c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87214cc:	c7 04 24 64 00 02 00 	movl   $0x20064,(%esp)
 87214d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87214d7:	e8 34 c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87214dc:	8b 53 08             	mov    0x8(%ebx),%edx
 87214df:	89 42 14             	mov    %eax,0x14(%edx)
 87214e2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87214e5:	c7 04 24 5c 00 02 00 	movl   $0x2005c,(%esp)
 87214ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 87214f0:	e8 1b c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87214f5:	8b 53 08             	mov    0x8(%ebx),%edx
 87214f8:	89 42 18             	mov    %eax,0x18(%edx)
 87214fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 87214fe:	c7 04 24 63 00 02 00 	movl   $0x20063,(%esp)
 8721505:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721509:	e8 02 c9 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872150e:	8b 53 08             	mov    0x8(%ebx),%edx
 8721511:	89 42 1c             	mov    %eax,0x1c(%edx)
 8721514:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721517:	c7 04 24 5a 00 02 00 	movl   $0x2005a,(%esp)
 872151e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721522:	e8 e9 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721527:	8b 53 08             	mov    0x8(%ebx),%edx
 872152a:	89 42 20             	mov    %eax,0x20(%edx)
 872152d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721530:	c7 04 24 5b 00 02 00 	movl   $0x2005b,(%esp)
 8721537:	89 44 24 04          	mov    %eax,0x4(%esp)
 872153b:	e8 d0 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721540:	8b 53 08             	mov    0x8(%ebx),%edx
 8721543:	89 42 24             	mov    %eax,0x24(%edx)
 8721546:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721549:	c7 04 24 5f 00 02 00 	movl   $0x2005f,(%esp)
 8721550:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721554:	e8 b7 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721559:	8b 53 08             	mov    0x8(%ebx),%edx
 872155c:	89 42 28             	mov    %eax,0x28(%edx)
 872155f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721562:	c7 04 24 3b 00 02 00 	movl   $0x2003b,(%esp)
 8721569:	89 44 24 04          	mov    %eax,0x4(%esp)
 872156d:	e8 9e c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721572:	8b 53 08             	mov    0x8(%ebx),%edx
 8721575:	89 42 2c             	mov    %eax,0x2c(%edx)
 8721578:	8b 45 0c             	mov    0xc(%ebp),%eax
 872157b:	c7 04 24 3c 00 02 00 	movl   $0x2003c,(%esp)
 8721582:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721586:	e8 85 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872158b:	8b 53 08             	mov    0x8(%ebx),%edx
 872158e:	89 42 30             	mov    %eax,0x30(%edx)
 8721591:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721594:	c7 04 24 3d 00 02 00 	movl   $0x2003d,(%esp)
 872159b:	89 44 24 04          	mov    %eax,0x4(%esp)
 872159f:	e8 6c c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87215a4:	8b 53 08             	mov    0x8(%ebx),%edx
 87215a7:	89 42 34             	mov    %eax,0x34(%edx)
 87215aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 87215ad:	c7 04 24 3e 00 02 00 	movl   $0x2003e,(%esp)
 87215b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 87215b8:	e8 53 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87215bd:	8b 53 08             	mov    0x8(%ebx),%edx
 87215c0:	89 42 38             	mov    %eax,0x38(%edx)
 87215c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 87215c6:	c7 04 24 3f 00 02 00 	movl   $0x2003f,(%esp)
 87215cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87215d1:	e8 3a c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87215d6:	8b 53 08             	mov    0x8(%ebx),%edx
 87215d9:	89 42 3c             	mov    %eax,0x3c(%edx)
 87215dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 87215df:	c7 04 24 40 00 02 00 	movl   $0x20040,(%esp)
 87215e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87215ea:	e8 21 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87215ef:	8b 53 08             	mov    0x8(%ebx),%edx
 87215f2:	89 42 40             	mov    %eax,0x40(%edx)
 87215f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 87215f8:	c7 04 24 41 00 02 00 	movl   $0x20041,(%esp)
 87215ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721603:	e8 08 c8 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721608:	8b 53 08             	mov    0x8(%ebx),%edx
 872160b:	89 42 44             	mov    %eax,0x44(%edx)
 872160e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721611:	c7 04 24 34 00 02 00 	movl   $0x20034,(%esp)
 8721618:	89 44 24 04          	mov    %eax,0x4(%esp)
 872161c:	e8 ef c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721621:	8b 53 08             	mov    0x8(%ebx),%edx
 8721624:	89 42 48             	mov    %eax,0x48(%edx)
 8721627:	8b 45 0c             	mov    0xc(%ebp),%eax
 872162a:	c7 04 24 35 00 02 00 	movl   $0x20035,(%esp)
 8721631:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721635:	e8 d6 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872163a:	8b 53 08             	mov    0x8(%ebx),%edx
 872163d:	89 42 4c             	mov    %eax,0x4c(%edx)
 8721640:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721643:	c7 04 24 36 00 02 00 	movl   $0x20036,(%esp)
 872164a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872164e:	e8 bd c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721653:	8b 53 08             	mov    0x8(%ebx),%edx
 8721656:	89 42 50             	mov    %eax,0x50(%edx)
 8721659:	8b 45 0c             	mov    0xc(%ebp),%eax
 872165c:	c7 04 24 37 00 02 00 	movl   $0x20037,(%esp)
 8721663:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721667:	e8 a4 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872166c:	8b 53 08             	mov    0x8(%ebx),%edx
 872166f:	89 42 54             	mov    %eax,0x54(%edx)
 8721672:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721675:	c7 04 24 38 00 02 00 	movl   $0x20038,(%esp)
 872167c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721680:	e8 8b c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721685:	8b 53 08             	mov    0x8(%ebx),%edx
 8721688:	89 42 58             	mov    %eax,0x58(%edx)
 872168b:	8b 45 0c             	mov    0xc(%ebp),%eax
 872168e:	c7 04 24 39 00 02 00 	movl   $0x20039,(%esp)
 8721695:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721699:	e8 72 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872169e:	8b 53 08             	mov    0x8(%ebx),%edx
 87216a1:	89 42 5c             	mov    %eax,0x5c(%edx)
 87216a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87216a7:	c7 04 24 3a 00 02 00 	movl   $0x2003a,(%esp)
 87216ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87216b2:	e8 59 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87216b7:	8b 53 08             	mov    0x8(%ebx),%edx
 87216ba:	89 42 60             	mov    %eax,0x60(%edx)
 87216bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 87216c0:	c7 04 24 4e 00 02 00 	movl   $0x2004e,(%esp)
 87216c7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87216cb:	e8 40 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87216d0:	8b 53 08             	mov    0x8(%ebx),%edx
 87216d3:	89 42 64             	mov    %eax,0x64(%edx)
 87216d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 87216d9:	c7 04 24 4f 00 02 00 	movl   $0x2004f,(%esp)
 87216e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87216e4:	e8 27 c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87216e9:	8b 53 08             	mov    0x8(%ebx),%edx
 87216ec:	89 42 68             	mov    %eax,0x68(%edx)
 87216ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 87216f2:	c7 04 24 50 00 02 00 	movl   $0x20050,(%esp)
 87216f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87216fd:	e8 0e c7 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721702:	8b 53 08             	mov    0x8(%ebx),%edx
 8721705:	89 42 6c             	mov    %eax,0x6c(%edx)
 8721708:	8b 45 0c             	mov    0xc(%ebp),%eax
 872170b:	c7 04 24 51 00 02 00 	movl   $0x20051,(%esp)
 8721712:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721716:	e8 f5 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872171b:	8b 53 08             	mov    0x8(%ebx),%edx
 872171e:	89 42 70             	mov    %eax,0x70(%edx)
 8721721:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721724:	c7 04 24 52 00 02 00 	movl   $0x20052,(%esp)
 872172b:	89 44 24 04          	mov    %eax,0x4(%esp)
 872172f:	e8 dc c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721734:	8b 53 08             	mov    0x8(%ebx),%edx
 8721737:	89 42 74             	mov    %eax,0x74(%edx)
 872173a:	8b 45 0c             	mov    0xc(%ebp),%eax
 872173d:	c7 04 24 53 00 02 00 	movl   $0x20053,(%esp)
 8721744:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721748:	e8 c3 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872174d:	8b 53 08             	mov    0x8(%ebx),%edx
 8721750:	89 42 78             	mov    %eax,0x78(%edx)
 8721753:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721756:	c7 04 24 54 00 02 00 	movl   $0x20054,(%esp)
 872175d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721761:	e8 aa c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721766:	8b 53 08             	mov    0x8(%ebx),%edx
 8721769:	89 42 7c             	mov    %eax,0x7c(%edx)
 872176c:	8b 45 0c             	mov    0xc(%ebp),%eax
 872176f:	c7 04 24 55 00 02 00 	movl   $0x20055,(%esp)
 8721776:	89 44 24 04          	mov    %eax,0x4(%esp)
 872177a:	e8 91 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872177f:	8b 53 08             	mov    0x8(%ebx),%edx
 8721782:	89 82 80 00 00 00    	mov    %eax,0x80(%edx)
 8721788:	8b 45 0c             	mov    0xc(%ebp),%eax
 872178b:	c7 04 24 56 00 02 00 	movl   $0x20056,(%esp)
 8721792:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721796:	e8 75 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872179b:	8b 53 08             	mov    0x8(%ebx),%edx
 872179e:	89 82 84 00 00 00    	mov    %eax,0x84(%edx)
 87217a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87217a7:	c7 04 24 57 00 02 00 	movl   $0x20057,(%esp)
 87217ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 87217b2:	e8 59 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87217b7:	8b 53 08             	mov    0x8(%ebx),%edx
 87217ba:	89 82 88 00 00 00    	mov    %eax,0x88(%edx)
 87217c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87217c3:	c7 04 24 58 00 02 00 	movl   $0x20058,(%esp)
 87217ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 87217ce:	e8 3d c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87217d3:	8b 53 08             	mov    0x8(%ebx),%edx
 87217d6:	89 82 8c 00 00 00    	mov    %eax,0x8c(%edx)
 87217dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 87217df:	c7 04 24 59 00 02 00 	movl   $0x20059,(%esp)
 87217e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87217ea:	e8 21 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87217ef:	8b 53 08             	mov    0x8(%ebx),%edx
 87217f2:	89 82 90 00 00 00    	mov    %eax,0x90(%edx)
 87217f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87217fb:	c7 04 24 42 00 02 00 	movl   $0x20042,(%esp)
 8721802:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721806:	e8 05 c6 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872180b:	8b 53 08             	mov    0x8(%ebx),%edx
 872180e:	89 82 94 00 00 00    	mov    %eax,0x94(%edx)
 8721814:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721817:	c7 04 24 43 00 02 00 	movl   $0x20043,(%esp)
 872181e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721822:	e8 e9 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721827:	8b 53 08             	mov    0x8(%ebx),%edx
 872182a:	89 82 98 00 00 00    	mov    %eax,0x98(%edx)
 8721830:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721833:	c7 04 24 44 00 02 00 	movl   $0x20044,(%esp)
 872183a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872183e:	e8 cd c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721843:	8b 53 08             	mov    0x8(%ebx),%edx
 8721846:	89 82 9c 00 00 00    	mov    %eax,0x9c(%edx)
 872184c:	8b 45 0c             	mov    0xc(%ebp),%eax
 872184f:	c7 04 24 45 00 02 00 	movl   $0x20045,(%esp)
 8721856:	89 44 24 04          	mov    %eax,0x4(%esp)
 872185a:	e8 b1 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872185f:	8b 53 08             	mov    0x8(%ebx),%edx
 8721862:	89 82 a0 00 00 00    	mov    %eax,0xa0(%edx)
 8721868:	8b 45 0c             	mov    0xc(%ebp),%eax
 872186b:	c7 04 24 46 00 02 00 	movl   $0x20046,(%esp)
 8721872:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721876:	e8 95 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872187b:	8b 53 08             	mov    0x8(%ebx),%edx
 872187e:	89 82 a4 00 00 00    	mov    %eax,0xa4(%edx)
 8721884:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721887:	c7 04 24 47 00 02 00 	movl   $0x20047,(%esp)
 872188e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721892:	e8 79 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721897:	8b 53 08             	mov    0x8(%ebx),%edx
 872189a:	89 82 a8 00 00 00    	mov    %eax,0xa8(%edx)
 87218a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 87218a3:	c7 04 24 48 00 02 00 	movl   $0x20048,(%esp)
 87218aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 87218ae:	e8 5d c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87218b3:	8b 53 08             	mov    0x8(%ebx),%edx
 87218b6:	89 82 ac 00 00 00    	mov    %eax,0xac(%edx)
 87218bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 87218bf:	c7 04 24 49 00 02 00 	movl   $0x20049,(%esp)
 87218c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87218ca:	e8 41 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87218cf:	8b 53 08             	mov    0x8(%ebx),%edx
 87218d2:	89 82 b0 00 00 00    	mov    %eax,0xb0(%edx)
 87218d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 87218db:	c7 04 24 4a 00 02 00 	movl   $0x2004a,(%esp)
 87218e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87218e6:	e8 25 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87218eb:	8b 53 08             	mov    0x8(%ebx),%edx
 87218ee:	89 82 b4 00 00 00    	mov    %eax,0xb4(%edx)
 87218f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87218f7:	c7 04 24 4b 00 02 00 	movl   $0x2004b,(%esp)
 87218fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721902:	e8 09 c5 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721907:	8b 53 08             	mov    0x8(%ebx),%edx
 872190a:	89 82 b8 00 00 00    	mov    %eax,0xb8(%edx)
 8721910:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721913:	c7 04 24 4c 00 02 00 	movl   $0x2004c,(%esp)
 872191a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872191e:	e8 ed c4 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721923:	8b 53 08             	mov    0x8(%ebx),%edx
 8721926:	89 82 bc 00 00 00    	mov    %eax,0xbc(%edx)
 872192c:	8b 45 0c             	mov    0xc(%ebp),%eax
 872192f:	c7 04 24 4d 00 02 00 	movl   $0x2004d,(%esp)
 8721936:	89 44 24 04          	mov    %eax,0x4(%esp)
 872193a:	e8 d1 c4 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872193f:	8b 53 08             	mov    0x8(%ebx),%edx
 8721942:	89 82 c0 00 00 00    	mov    %eax,0xc0(%edx)
 8721948:	83 c4 14             	add    $0x14,%esp
 872194b:	5b                   	pop    %ebx
 872194c:	5d                   	pop    %ebp
 872194d:	c3                   	ret
 872194e:	66 90                	xchg   %ax,%ax
 8721950:	e8 eb 95 fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 8721955:	89 43 0c             	mov    %eax,0xc(%ebx)
 8721958:	8b 43 08             	mov    0x8(%ebx),%eax
 872195b:	c7 40 08 c4 11 d0 08 	movl   $0x8d011c4,0x8(%eax)
 8721962:	c7 40 0c c4 11 d0 08 	movl   $0x8d011c4,0xc(%eax)
 8721969:	c7 40 10 e8 11 d0 08 	movl   $0x8d011e8,0x10(%eax)
 8721970:	c7 40 14 e8 11 d0 08 	movl   $0x8d011e8,0x14(%eax)
 8721977:	c7 40 18 88 11 d0 08 	movl   $0x8d01188,0x18(%eax)
 872197e:	c7 40 1c 88 11 d0 08 	movl   $0x8d01188,0x1c(%eax)
 8721985:	c7 40 20 14 06 de 08 	movl   $0x8de0614,0x20(%eax)
 872198c:	c7 40 24 0c 12 d0 08 	movl   $0x8d0120c,0x24(%eax)
 8721993:	c7 40 28 88 11 d0 08 	movl   $0x8d01188,0x28(%eax)
 872199a:	c7 40 2c 18 12 d0 08 	movl   $0x8d01218,0x2c(%eax)
 87219a1:	c7 40 30 34 12 d0 08 	movl   $0x8d01234,0x30(%eax)
 87219a8:	c7 40 34 50 12 d0 08 	movl   $0x8d01250,0x34(%eax)
 87219af:	c7 40 38 70 12 d0 08 	movl   $0x8d01270,0x38(%eax)
 87219b6:	c7 40 3c 98 12 d0 08 	movl   $0x8d01298,0x3c(%eax)
 87219bd:	c7 40 40 bc 12 d0 08 	movl   $0x8d012bc,0x40(%eax)
 87219c4:	c7 40 44 d8 12 d0 08 	movl   $0x8d012d8,0x44(%eax)
 87219cb:	c7 40 48 fc 12 d0 08 	movl   $0x8d012fc,0x48(%eax)
 87219d2:	c7 40 4c 0c 13 d0 08 	movl   $0x8d0130c,0x4c(%eax)
 87219d9:	c7 40 50 1c 13 d0 08 	movl   $0x8d0131c,0x50(%eax)
 87219e0:	c7 40 54 2c 13 d0 08 	movl   $0x8d0132c,0x54(%eax)
 87219e7:	c7 40 58 3c 13 d0 08 	movl   $0x8d0133c,0x58(%eax)
 87219ee:	c7 40 5c 4c 13 d0 08 	movl   $0x8d0134c,0x5c(%eax)
 87219f5:	c7 40 60 5c 13 d0 08 	movl   $0x8d0135c,0x60(%eax)
 87219fc:	c7 40 64 6c 13 d0 08 	movl   $0x8d0136c,0x64(%eax)
 8721a03:	c7 40 68 8c 13 d0 08 	movl   $0x8d0138c,0x68(%eax)
 8721a0a:	c7 40 6c b0 13 d0 08 	movl   $0x8d013b0,0x6c(%eax)
 8721a11:	c7 40 70 c8 13 d0 08 	movl   $0x8d013c8,0x70(%eax)
 8721a18:	c7 40 74 e0 13 d0 08 	movl   $0x8d013e0,0x74(%eax)
 8721a1f:	c7 40 78 f0 13 d0 08 	movl   $0x8d013f0,0x78(%eax)
 8721a26:	c7 40 7c 04 14 d0 08 	movl   $0x8d01404,0x7c(%eax)
 8721a2d:	c7 80 80 00 00 00 18 	movl   $0x8d01418,0x80(%eax)
 8721a34:	14 d0 08 
 8721a37:	c7 80 84 00 00 00 34 	movl   $0x8d01434,0x84(%eax)
 8721a3e:	14 d0 08 
 8721a41:	c7 80 88 00 00 00 5c 	movl   $0x8d0145c,0x88(%eax)
 8721a48:	14 d0 08 
 8721a4b:	c7 80 8c 00 00 00 7c 	movl   $0x8d0147c,0x8c(%eax)
 8721a52:	14 d0 08 
 8721a55:	c7 80 90 00 00 00 a0 	movl   $0x8d014a0,0x90(%eax)
 8721a5c:	14 d0 08 
 8721a5f:	c7 80 94 00 00 00 c4 	movl   $0x8d014c4,0x94(%eax)
 8721a66:	14 d0 08 
 8721a69:	c7 80 98 00 00 00 d4 	movl   $0x8d014d4,0x98(%eax)
 8721a70:	14 d0 08 
 8721a73:	c7 80 9c 00 00 00 e4 	movl   $0x8d014e4,0x9c(%eax)
 8721a7a:	14 d0 08 
 8721a7d:	c7 80 a0 00 00 00 f4 	movl   $0x8d014f4,0xa0(%eax)
 8721a84:	14 d0 08 
 8721a87:	c7 80 a4 00 00 00 e0 	movl   $0x8d013e0,0xa4(%eax)
 8721a8e:	13 d0 08 
 8721a91:	c7 80 a8 00 00 00 04 	movl   $0x8d01504,0xa8(%eax)
 8721a98:	15 d0 08 
 8721a9b:	c7 80 ac 00 00 00 14 	movl   $0x8d01514,0xac(%eax)
 8721aa2:	15 d0 08 
 8721aa5:	c7 80 b0 00 00 00 24 	movl   $0x8d01524,0xb0(%eax)
 8721aac:	15 d0 08 
 8721aaf:	c7 80 b4 00 00 00 34 	movl   $0x8d01534,0xb4(%eax)
 8721ab6:	15 d0 08 
 8721ab9:	c7 80 b8 00 00 00 44 	movl   $0x8d01544,0xb8(%eax)
 8721ac0:	15 d0 08 
 8721ac3:	c7 80 bc 00 00 00 54 	movl   $0x8d01554,0xbc(%eax)
 8721aca:	15 d0 08 
 8721acd:	c7 80 c0 00 00 00 64 	movl   $0x8d01564,0xc0(%eax)
 8721ad4:	15 d0 08 
 8721ad7:	83 c4 14             	add    $0x14,%esp
 8721ada:	5b                   	pop    %ebx
 8721adb:	5d                   	pop    %ebp
 8721adc:	c3                   	ret
 8721add:	8d 76 00             	lea    0x0(%esi),%esi
 8721ae0:	c7 04 24 c8 00 00 00 	movl   $0xc8,(%esp)
 8721ae7:	e8 64 29 00 00       	call   8724450 <_Znwj>
 8721aec:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8721af3:	c7 00 70 09 d0 08    	movl   $0x8d00970,(%eax)
 8721af9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8721b00:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8721b07:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8721b0e:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8721b15:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8721b1c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8721b23:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8721b2a:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8721b31:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8721b38:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 8721b3f:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8721b46:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 8721b4d:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 8721b54:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 8721b5b:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 8721b62:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 8721b69:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 8721b70:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 8721b77:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 8721b7e:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 8721b85:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 8721b8c:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 8721b93:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 8721b9a:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 8721ba1:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 8721ba8:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 8721baf:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 8721bb6:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 8721bbd:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 8721bc4:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 8721bcb:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 8721bd2:	00 00 00 
 8721bd5:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 8721bdc:	00 00 00 
 8721bdf:	c7 80 88 00 00 00 00 	movl   $0x0,0x88(%eax)
 8721be6:	00 00 00 
 8721be9:	c7 80 8c 00 00 00 00 	movl   $0x0,0x8c(%eax)
 8721bf0:	00 00 00 
 8721bf3:	c7 80 90 00 00 00 00 	movl   $0x0,0x90(%eax)
 8721bfa:	00 00 00 
 8721bfd:	c7 80 94 00 00 00 00 	movl   $0x0,0x94(%eax)
 8721c04:	00 00 00 
 8721c07:	c7 80 98 00 00 00 00 	movl   $0x0,0x98(%eax)
 8721c0e:	00 00 00 
 8721c11:	c7 80 9c 00 00 00 00 	movl   $0x0,0x9c(%eax)
 8721c18:	00 00 00 
 8721c1b:	c7 80 a0 00 00 00 00 	movl   $0x0,0xa0(%eax)
 8721c22:	00 00 00 
 8721c25:	c7 80 a4 00 00 00 00 	movl   $0x0,0xa4(%eax)
 8721c2c:	00 00 00 
 8721c2f:	c7 80 a8 00 00 00 00 	movl   $0x0,0xa8(%eax)
 8721c36:	00 00 00 
 8721c39:	c7 80 ac 00 00 00 00 	movl   $0x0,0xac(%eax)
 8721c40:	00 00 00 
 8721c43:	c7 80 b0 00 00 00 00 	movl   $0x0,0xb0(%eax)
 8721c4a:	00 00 00 
 8721c4d:	c7 80 b4 00 00 00 00 	movl   $0x0,0xb4(%eax)
 8721c54:	00 00 00 
 8721c57:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 8721c5e:	00 00 00 
 8721c61:	c7 80 bc 00 00 00 00 	movl   $0x0,0xbc(%eax)
 8721c68:	00 00 00 
 8721c6b:	c7 80 c0 00 00 00 00 	movl   $0x0,0xc0(%eax)
 8721c72:	00 00 00 
 8721c75:	c6 80 c4 00 00 00 00 	movb   $0x0,0xc4(%eax)
 8721c7c:	89 43 08             	mov    %eax,0x8(%ebx)
 8721c7f:	e9 e1 f7 ff ff       	jmp    8721465 <_ZNSt11__timepunctIwE23_M_initialize_timepunctEP15__locale_struct+0x15>
 8721c84:	90                   	nop
 8721c85:	90                   	nop
 8721c86:	90                   	nop
 8721c87:	90                   	nop
 8721c88:	90                   	nop
 8721c89:	90                   	nop
 8721c8a:	90                   	nop
 8721c8b:	90                   	nop
 8721c8c:	90                   	nop
 8721c8d:	90                   	nop
 8721c8e:	90                   	nop
 8721c8f:	90                   	nop

```

```c
// std::__timepunct<wchar_t>::_M_initialize_timepunct @ 0x8721450

/* std::__timepunct<wchar_t>::_M_initialize_timepunct(__locale_struct*) */

void __thiscall
std::__timepunct<wchar_t>::_M_initialize_timepunct
          (__timepunct<wchar_t> *this,__locale_struct *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(this + 8) == 0) {
    puVar3 = operator_new(200);
    puVar3[1] = 0;
    *puVar3 = &PTR____timepunct_cache_08d00970;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0;
    puVar3[0x20] = 0;
    puVar3[0x21] = 0;
    puVar3[0x22] = 0;
    puVar3[0x23] = 0;
    puVar3[0x24] = 0;
    puVar3[0x25] = 0;
    puVar3[0x26] = 0;
    puVar3[0x27] = 0;
    puVar3[0x28] = 0;
    puVar3[0x29] = 0;
    puVar3[0x2a] = 0;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x30] = 0;
    *(undefined1 *)(puVar3 + 0x31) = 0;
    *(undefined4 **)(this + 8) = puVar3;
  }
  if (param_1 != (__locale_struct *)0x0) {
    uVar2 = locale::facet::_S_clone_c_locale(&param_1);
    *(undefined4 *)(this + 0xc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 8) = uVar2;
    uVar2 = __nl_langinfo_l(0x20061,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x10) = uVar2;
    uVar2 = __nl_langinfo_l(0x20064,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x14) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x18) = uVar2;
    uVar2 = __nl_langinfo_l(0x20063,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x1c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x20) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x24) = uVar2;
    uVar2 = __nl_langinfo_l(0x2005f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x28) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x2c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x30) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x34) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x38) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x3c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20040,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x40) = uVar2;
    uVar2 = __nl_langinfo_l(0x20041,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x44) = uVar2;
    uVar2 = __nl_langinfo_l(0x20034,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x48) = uVar2;
    uVar2 = __nl_langinfo_l(0x20035,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x4c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20036,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x50) = uVar2;
    uVar2 = __nl_langinfo_l(0x20037,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x54) = uVar2;
    uVar2 = __nl_langinfo_l(0x20038,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x58) = uVar2;
    uVar2 = __nl_langinfo_l(0x20039,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x5c) = uVar2;
    uVar2 = __nl_langinfo_l(0x2003a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x60) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004e,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 100) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004f,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x68) = uVar2;
    uVar2 = __nl_langinfo_l(0x20050,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x6c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20051,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x70) = uVar2;
    uVar2 = __nl_langinfo_l(0x20052,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x74) = uVar2;
    uVar2 = __nl_langinfo_l(0x20053,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x78) = uVar2;
    uVar2 = __nl_langinfo_l(0x20054,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x7c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20055,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x80) = uVar2;
    uVar2 = __nl_langinfo_l(0x20056,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x84) = uVar2;
    uVar2 = __nl_langinfo_l(0x20057,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x88) = uVar2;
    uVar2 = __nl_langinfo_l(0x20058,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x8c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20059,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x90) = uVar2;
    uVar2 = __nl_langinfo_l(0x20042,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x94) = uVar2;
    uVar2 = __nl_langinfo_l(0x20043,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x98) = uVar2;
    uVar2 = __nl_langinfo_l(0x20044,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x9c) = uVar2;
    uVar2 = __nl_langinfo_l(0x20045,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa0) = uVar2;
    uVar2 = __nl_langinfo_l(0x20046,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa4) = uVar2;
    uVar2 = __nl_langinfo_l(0x20047,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xa8) = uVar2;
    uVar2 = __nl_langinfo_l(0x20048,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xac) = uVar2;
    uVar2 = __nl_langinfo_l(0x20049,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb0) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004a,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb4) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004b,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xb8) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004c,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xbc) = uVar2;
    uVar2 = __nl_langinfo_l(0x2004d,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0xc0) = uVar2;
    return;
  }
  uVar2 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 0xc) = uVar2;
  iVar1 = *(int *)(this + 8);
  *(undefined **)(iVar1 + 8) = &DAT_08d011c4;
  *(undefined **)(iVar1 + 0xc) = &DAT_08d011c4;
  *(undefined **)(iVar1 + 0x10) = &DAT_08d011e8;
  *(undefined **)(iVar1 + 0x14) = &DAT_08d011e8;
  *(undefined **)(iVar1 + 0x18) = &DAT_08d01188;
  *(undefined **)(iVar1 + 0x1c) = &DAT_08d01188;
  *(undefined **)(iVar1 + 0x20) = &DAT_08de0614;
  *(undefined **)(iVar1 + 0x24) = &DAT_08d0120c;
  *(undefined **)(iVar1 + 0x28) = &DAT_08d01188;
  *(wchar_t **)(iVar1 + 0x2c) = L"Sunday";
  *(wchar_t **)(iVar1 + 0x30) = L"Monday";
  *(wchar_t **)(iVar1 + 0x34) = L"Tuesday";
  *(wchar_t **)(iVar1 + 0x38) = L"Wednesday";
  *(wchar_t **)(iVar1 + 0x3c) = L"Thursday";
  *(wchar_t **)(iVar1 + 0x40) = L"Friday";
  *(wchar_t **)(iVar1 + 0x44) = L"Saturday";
  *(undefined **)(iVar1 + 0x48) = &DAT_08d012fc;
  *(undefined **)(iVar1 + 0x4c) = &DAT_08d0130c;
  *(undefined **)(iVar1 + 0x50) = &DAT_08d0131c;
  *(undefined **)(iVar1 + 0x54) = &DAT_08d0132c;
  *(undefined **)(iVar1 + 0x58) = &DAT_08d0133c;
  *(undefined **)(iVar1 + 0x5c) = &DAT_08d0134c;
  *(undefined **)(iVar1 + 0x60) = &DAT_08d0135c;
  *(wchar_t **)(iVar1 + 100) = L"January";
  *(wchar_t **)(iVar1 + 0x68) = L"February";
  *(wchar_t **)(iVar1 + 0x6c) = L"March";
  *(wchar_t **)(iVar1 + 0x70) = L"April";
  *(undefined **)(iVar1 + 0x74) = &DAT_08d013e0;
  *(undefined **)(iVar1 + 0x78) = &DAT_08d013f0;
  *(undefined **)(iVar1 + 0x7c) = &DAT_08d01404;
  *(wchar_t **)(iVar1 + 0x80) = L"August";
  *(wchar_t **)(iVar1 + 0x84) = L"September";
  *(wchar_t **)(iVar1 + 0x88) = L"October";
  *(wchar_t **)(iVar1 + 0x8c) = L"November";
  *(wchar_t **)(iVar1 + 0x90) = L"December";
  *(undefined **)(iVar1 + 0x94) = &DAT_08d014c4;
  *(undefined **)(iVar1 + 0x98) = &DAT_08d014d4;
  *(undefined **)(iVar1 + 0x9c) = &DAT_08d014e4;
  *(undefined **)(iVar1 + 0xa0) = &DAT_08d014f4;
  *(undefined **)(iVar1 + 0xa4) = &DAT_08d013e0;
  *(undefined **)(iVar1 + 0xa8) = &DAT_08d01504;
  *(undefined **)(iVar1 + 0xac) = &DAT_08d01514;
  *(undefined **)(iVar1 + 0xb0) = &DAT_08d01524;
  *(undefined **)(iVar1 + 0xb4) = &DAT_08d01534;
  *(undefined **)(iVar1 + 0xb8) = &DAT_08d01544;
  *(undefined **)(iVar1 + 0xbc) = &DAT_08d01554;
  *(undefined **)(iVar1 + 0xc0) = &DAT_08d01564;
  return;
}

```

---

## _M_put

```asm
// === 087224d0 std::__timepunct<wchar_t>::_M_put  [0x087224d0-0x872251f] ===
 87224d0:	55                   	push   %ebp
 87224d1:	89 e5                	mov    %esp,%ebp
 87224d3:	53                   	push   %ebx
 87224d4:	83 ec 24             	sub    $0x24,%esp
 87224d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87224da:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87224dd:	8b 40 0c             	mov    0xc(%eax),%eax
 87224e0:	89 1c 24             	mov    %ebx,(%esp)
 87224e3:	89 44 24 10          	mov    %eax,0x10(%esp)
 87224e7:	8b 45 18             	mov    0x18(%ebp),%eax
 87224ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87224ee:	8b 45 14             	mov    0x14(%ebp),%eax
 87224f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 87224f5:	8b 45 10             	mov    0x10(%ebp),%eax
 87224f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 87224fc:	e8 0f bd 95 ff       	call   807e210 <__wcsftime_l@plt>
 8722501:	85 c0                	test   %eax,%eax
 8722503:	75 06                	jne    872250b <_ZNKSt11__timepunctIwE6_M_putEPwjPKwPK2tm+0x3b>
 8722505:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 872250b:	83 c4 24             	add    $0x24,%esp
 872250e:	5b                   	pop    %ebx
 872250f:	5d                   	pop    %ebp
 8722510:	c3                   	ret
 8722511:	90                   	nop
 8722512:	90                   	nop
 8722513:	90                   	nop
 8722514:	90                   	nop
 8722515:	90                   	nop
 8722516:	90                   	nop
 8722517:	90                   	nop
 8722518:	90                   	nop
 8722519:	90                   	nop
 872251a:	90                   	nop
 872251b:	90                   	nop
 872251c:	90                   	nop
 872251d:	90                   	nop
 872251e:	90                   	nop
 872251f:	90                   	nop

```

```c
// std::__timepunct<wchar_t>::_M_put @ 0x87224d0

/* std::__timepunct<wchar_t>::_M_put(wchar_t*, unsigned int, wchar_t const*, tm const*) const */

void __thiscall
std::__timepunct<wchar_t>::_M_put
          (__timepunct<wchar_t> *this,wchar_t *param_1,uint param_2,wchar_t *param_3,tm *param_4)

{
  int iVar1;
  
  iVar1 = __wcsftime_l(param_1,param_2,param_3,param_4,*(undefined4 *)(this + 0xc));
  if (iVar1 == 0) {
    *param_1 = L'\0';
  }
  return;
}

```

