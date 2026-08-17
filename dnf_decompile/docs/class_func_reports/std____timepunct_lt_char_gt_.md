# std____timepunct_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## _M_initialize_timepunct

```asm
// === 08721c90 std::__timepunct<char>::_M_initialize_timepunct  [0x08721c90-0x87224cf] ===
 8721c90:	55                   	push   %ebp
 8721c91:	89 e5                	mov    %esp,%ebp
 8721c93:	56                   	push   %esi
 8721c94:	53                   	push   %ebx
 8721c95:	83 ec 10             	sub    $0x10,%esp
 8721c98:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8721c9b:	8b 73 08             	mov    0x8(%ebx),%esi
 8721c9e:	85 f6                	test   %esi,%esi
 8721ca0:	0f 84 7a 06 00 00    	je     8722320 <_ZNSt11__timepunctIcE23_M_initialize_timepunctEP15__locale_struct+0x690>
 8721ca6:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8721ca9:	85 c9                	test   %ecx,%ecx
 8721cab:	0f 84 df 04 00 00    	je     8722190 <_ZNSt11__timepunctIcE23_M_initialize_timepunctEP15__locale_struct+0x500>
 8721cb1:	8d 45 0c             	lea    0xc(%ebp),%eax
 8721cb4:	89 04 24             	mov    %eax,(%esp)
 8721cb7:	e8 54 0e 00 00       	call   8722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>
 8721cbc:	8b 73 08             	mov    0x8(%ebx),%esi
 8721cbf:	89 43 0c             	mov    %eax,0xc(%ebx)
 8721cc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721cc5:	c7 04 24 29 00 02 00 	movl   $0x20029,(%esp)
 8721ccc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721cd0:	e8 3b c1 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721cd5:	89 46 08             	mov    %eax,0x8(%esi)
 8721cd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721cdb:	8b 73 08             	mov    0x8(%ebx),%esi
 8721cde:	c7 04 24 2e 00 02 00 	movl   $0x2002e,(%esp)
 8721ce5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721ce9:	e8 22 c1 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721cee:	89 46 0c             	mov    %eax,0xc(%esi)
 8721cf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721cf4:	8b 73 08             	mov    0x8(%ebx),%esi
 8721cf7:	c7 04 24 2a 00 02 00 	movl   $0x2002a,(%esp)
 8721cfe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d02:	e8 09 c1 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d07:	89 46 10             	mov    %eax,0x10(%esi)
 8721d0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d0d:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d10:	c7 04 24 31 00 02 00 	movl   $0x20031,(%esp)
 8721d17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d1b:	e8 f0 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d20:	89 46 14             	mov    %eax,0x14(%esi)
 8721d23:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d26:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d29:	c7 04 24 28 00 02 00 	movl   $0x20028,(%esp)
 8721d30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d34:	e8 d7 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d39:	89 46 18             	mov    %eax,0x18(%esi)
 8721d3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d3f:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d42:	c7 04 24 30 00 02 00 	movl   $0x20030,(%esp)
 8721d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d4d:	e8 be c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d52:	89 46 1c             	mov    %eax,0x1c(%esi)
 8721d55:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d58:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d5b:	c7 04 24 26 00 02 00 	movl   $0x20026,(%esp)
 8721d62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d66:	e8 a5 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d6b:	89 46 20             	mov    %eax,0x20(%esi)
 8721d6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d71:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d74:	c7 04 24 27 00 02 00 	movl   $0x20027,(%esp)
 8721d7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d7f:	e8 8c c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d84:	89 46 24             	mov    %eax,0x24(%esi)
 8721d87:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721d8a:	8b 73 08             	mov    0x8(%ebx),%esi
 8721d8d:	c7 04 24 2b 00 02 00 	movl   $0x2002b,(%esp)
 8721d94:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721d98:	e8 73 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721d9d:	89 46 28             	mov    %eax,0x28(%esi)
 8721da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721da3:	8b 73 08             	mov    0x8(%ebx),%esi
 8721da6:	c7 04 24 07 00 02 00 	movl   $0x20007,(%esp)
 8721dad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721db1:	e8 5a c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721db6:	89 46 2c             	mov    %eax,0x2c(%esi)
 8721db9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721dbc:	8b 73 08             	mov    0x8(%ebx),%esi
 8721dbf:	c7 04 24 08 00 02 00 	movl   $0x20008,(%esp)
 8721dc6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721dca:	e8 41 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721dcf:	89 46 30             	mov    %eax,0x30(%esi)
 8721dd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721dd5:	8b 73 08             	mov    0x8(%ebx),%esi
 8721dd8:	c7 04 24 09 00 02 00 	movl   $0x20009,(%esp)
 8721ddf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721de3:	e8 28 c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721de8:	89 46 34             	mov    %eax,0x34(%esi)
 8721deb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721dee:	8b 73 08             	mov    0x8(%ebx),%esi
 8721df1:	c7 04 24 0a 00 02 00 	movl   $0x2000a,(%esp)
 8721df8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721dfc:	e8 0f c0 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e01:	89 46 38             	mov    %eax,0x38(%esi)
 8721e04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e07:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e0a:	c7 04 24 0b 00 02 00 	movl   $0x2000b,(%esp)
 8721e11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e15:	e8 f6 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e1a:	89 46 3c             	mov    %eax,0x3c(%esi)
 8721e1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e20:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e23:	c7 04 24 0c 00 02 00 	movl   $0x2000c,(%esp)
 8721e2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e2e:	e8 dd bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e33:	89 46 40             	mov    %eax,0x40(%esi)
 8721e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e39:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e3c:	c7 04 24 0d 00 02 00 	movl   $0x2000d,(%esp)
 8721e43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e47:	e8 c4 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e4c:	89 46 44             	mov    %eax,0x44(%esi)
 8721e4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e52:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e55:	c7 04 24 00 00 02 00 	movl   $0x20000,(%esp)
 8721e5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e60:	e8 ab bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e65:	89 46 48             	mov    %eax,0x48(%esi)
 8721e68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e6b:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e6e:	c7 04 24 01 00 02 00 	movl   $0x20001,(%esp)
 8721e75:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e79:	e8 92 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e7e:	89 46 4c             	mov    %eax,0x4c(%esi)
 8721e81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e84:	8b 73 08             	mov    0x8(%ebx),%esi
 8721e87:	c7 04 24 02 00 02 00 	movl   $0x20002,(%esp)
 8721e8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721e92:	e8 79 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721e97:	89 46 50             	mov    %eax,0x50(%esi)
 8721e9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721e9d:	8b 73 08             	mov    0x8(%ebx),%esi
 8721ea0:	c7 04 24 03 00 02 00 	movl   $0x20003,(%esp)
 8721ea7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721eab:	e8 60 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721eb0:	89 46 54             	mov    %eax,0x54(%esi)
 8721eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721eb6:	8b 73 08             	mov    0x8(%ebx),%esi
 8721eb9:	c7 04 24 04 00 02 00 	movl   $0x20004,(%esp)
 8721ec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721ec4:	e8 47 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721ec9:	89 46 58             	mov    %eax,0x58(%esi)
 8721ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721ecf:	8b 73 08             	mov    0x8(%ebx),%esi
 8721ed2:	c7 04 24 05 00 02 00 	movl   $0x20005,(%esp)
 8721ed9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721edd:	e8 2e bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721ee2:	89 46 5c             	mov    %eax,0x5c(%esi)
 8721ee5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721ee8:	8b 73 08             	mov    0x8(%ebx),%esi
 8721eeb:	c7 04 24 06 00 02 00 	movl   $0x20006,(%esp)
 8721ef2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721ef6:	e8 15 bf 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721efb:	89 46 60             	mov    %eax,0x60(%esi)
 8721efe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f01:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f04:	c7 04 24 1a 00 02 00 	movl   $0x2001a,(%esp)
 8721f0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f0f:	e8 fc be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f14:	89 46 64             	mov    %eax,0x64(%esi)
 8721f17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f1a:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f1d:	c7 04 24 1b 00 02 00 	movl   $0x2001b,(%esp)
 8721f24:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f28:	e8 e3 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f2d:	89 46 68             	mov    %eax,0x68(%esi)
 8721f30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f33:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f36:	c7 04 24 1c 00 02 00 	movl   $0x2001c,(%esp)
 8721f3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f41:	e8 ca be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f46:	89 46 6c             	mov    %eax,0x6c(%esi)
 8721f49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f4c:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f4f:	c7 04 24 1d 00 02 00 	movl   $0x2001d,(%esp)
 8721f56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f5a:	e8 b1 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f5f:	89 46 70             	mov    %eax,0x70(%esi)
 8721f62:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f65:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f68:	c7 04 24 1e 00 02 00 	movl   $0x2001e,(%esp)
 8721f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f73:	e8 98 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f78:	89 46 74             	mov    %eax,0x74(%esi)
 8721f7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f7e:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f81:	c7 04 24 1f 00 02 00 	movl   $0x2001f,(%esp)
 8721f88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721f8c:	e8 7f be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721f91:	89 46 78             	mov    %eax,0x78(%esi)
 8721f94:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721f97:	8b 73 08             	mov    0x8(%ebx),%esi
 8721f9a:	c7 04 24 20 00 02 00 	movl   $0x20020,(%esp)
 8721fa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721fa5:	e8 66 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721faa:	89 46 7c             	mov    %eax,0x7c(%esi)
 8721fad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721fb0:	8b 73 08             	mov    0x8(%ebx),%esi
 8721fb3:	c7 04 24 21 00 02 00 	movl   $0x20021,(%esp)
 8721fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721fbe:	e8 4d be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721fc3:	89 86 80 00 00 00    	mov    %eax,0x80(%esi)
 8721fc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721fcc:	8b 73 08             	mov    0x8(%ebx),%esi
 8721fcf:	c7 04 24 22 00 02 00 	movl   $0x20022,(%esp)
 8721fd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721fda:	e8 31 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721fdf:	89 86 84 00 00 00    	mov    %eax,0x84(%esi)
 8721fe5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8721fe8:	8b 73 08             	mov    0x8(%ebx),%esi
 8721feb:	c7 04 24 23 00 02 00 	movl   $0x20023,(%esp)
 8721ff2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8721ff6:	e8 15 be 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721ffb:	89 86 88 00 00 00    	mov    %eax,0x88(%esi)
 8722001:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722004:	8b 73 08             	mov    0x8(%ebx),%esi
 8722007:	c7 04 24 24 00 02 00 	movl   $0x20024,(%esp)
 872200e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722012:	e8 f9 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722017:	89 86 8c 00 00 00    	mov    %eax,0x8c(%esi)
 872201d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722020:	8b 73 08             	mov    0x8(%ebx),%esi
 8722023:	c7 04 24 25 00 02 00 	movl   $0x20025,(%esp)
 872202a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872202e:	e8 dd bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722033:	89 86 90 00 00 00    	mov    %eax,0x90(%esi)
 8722039:	8b 45 0c             	mov    0xc(%ebp),%eax
 872203c:	8b 73 08             	mov    0x8(%ebx),%esi
 872203f:	c7 04 24 0e 00 02 00 	movl   $0x2000e,(%esp)
 8722046:	89 44 24 04          	mov    %eax,0x4(%esp)
 872204a:	e8 c1 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872204f:	89 86 94 00 00 00    	mov    %eax,0x94(%esi)
 8722055:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722058:	8b 73 08             	mov    0x8(%ebx),%esi
 872205b:	c7 04 24 0f 00 02 00 	movl   $0x2000f,(%esp)
 8722062:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722066:	e8 a5 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872206b:	89 86 98 00 00 00    	mov    %eax,0x98(%esi)
 8722071:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722074:	8b 73 08             	mov    0x8(%ebx),%esi
 8722077:	c7 04 24 10 00 02 00 	movl   $0x20010,(%esp)
 872207e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722082:	e8 89 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722087:	89 86 9c 00 00 00    	mov    %eax,0x9c(%esi)
 872208d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722090:	8b 73 08             	mov    0x8(%ebx),%esi
 8722093:	c7 04 24 11 00 02 00 	movl   $0x20011,(%esp)
 872209a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872209e:	e8 6d bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87220a3:	89 86 a0 00 00 00    	mov    %eax,0xa0(%esi)
 87220a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87220ac:	8b 73 08             	mov    0x8(%ebx),%esi
 87220af:	c7 04 24 12 00 02 00 	movl   $0x20012,(%esp)
 87220b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87220ba:	e8 51 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87220bf:	89 86 a4 00 00 00    	mov    %eax,0xa4(%esi)
 87220c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 87220c8:	8b 73 08             	mov    0x8(%ebx),%esi
 87220cb:	c7 04 24 13 00 02 00 	movl   $0x20013,(%esp)
 87220d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87220d6:	e8 35 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87220db:	89 86 a8 00 00 00    	mov    %eax,0xa8(%esi)
 87220e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 87220e4:	8b 73 08             	mov    0x8(%ebx),%esi
 87220e7:	c7 04 24 14 00 02 00 	movl   $0x20014,(%esp)
 87220ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 87220f2:	e8 19 bd 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87220f7:	89 86 ac 00 00 00    	mov    %eax,0xac(%esi)
 87220fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722100:	8b 73 08             	mov    0x8(%ebx),%esi
 8722103:	c7 04 24 15 00 02 00 	movl   $0x20015,(%esp)
 872210a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872210e:	e8 fd bc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722113:	89 86 b0 00 00 00    	mov    %eax,0xb0(%esi)
 8722119:	8b 45 0c             	mov    0xc(%ebp),%eax
 872211c:	8b 73 08             	mov    0x8(%ebx),%esi
 872211f:	c7 04 24 16 00 02 00 	movl   $0x20016,(%esp)
 8722126:	89 44 24 04          	mov    %eax,0x4(%esp)
 872212a:	e8 e1 bc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872212f:	89 86 b4 00 00 00    	mov    %eax,0xb4(%esi)
 8722135:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722138:	8b 73 08             	mov    0x8(%ebx),%esi
 872213b:	c7 04 24 17 00 02 00 	movl   $0x20017,(%esp)
 8722142:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722146:	e8 c5 bc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872214b:	89 86 b8 00 00 00    	mov    %eax,0xb8(%esi)
 8722151:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722154:	8b 73 08             	mov    0x8(%ebx),%esi
 8722157:	c7 04 24 18 00 02 00 	movl   $0x20018,(%esp)
 872215e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722162:	e8 a9 bc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722167:	8b 5b 08             	mov    0x8(%ebx),%ebx
 872216a:	89 86 bc 00 00 00    	mov    %eax,0xbc(%esi)
 8722170:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722173:	c7 04 24 19 00 02 00 	movl   $0x20019,(%esp)
 872217a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872217e:	e8 8d bc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8722183:	89 83 c0 00 00 00    	mov    %eax,0xc0(%ebx)
 8722189:	83 c4 10             	add    $0x10,%esp
 872218c:	5b                   	pop    %ebx
 872218d:	5e                   	pop    %esi
 872218e:	5d                   	pop    %ebp
 872218f:	c3                   	ret
 8722190:	e8 ab 8d fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 8722195:	89 43 0c             	mov    %eax,0xc(%ebx)
 8722198:	8b 43 08             	mov    0x8(%ebx),%eax
 872219b:	c7 40 08 42 ed cf 08 	movl   $0x8cfed42,0x8(%eax)
 87221a2:	c7 40 0c 42 ed cf 08 	movl   $0x8cfed42,0xc(%eax)
 87221a9:	c7 40 10 51 ed cf 08 	movl   $0x8cfed51,0x10(%eax)
 87221b0:	c7 40 14 51 ed cf 08 	movl   $0x8cfed51,0x14(%eax)
 87221b7:	c7 40 18 a4 c9 d0 08 	movl   $0x8d0c9a4,0x18(%eax)
 87221be:	c7 40 1c a4 c9 d0 08 	movl   $0x8d0c9a4,0x1c(%eax)
 87221c5:	c7 40 20 df 05 de 08 	movl   $0x8de05df,0x20(%eax)
 87221cc:	c7 40 24 74 15 d0 08 	movl   $0x8d01574,0x24(%eax)
 87221d3:	c7 40 28 a4 c9 d0 08 	movl   $0x8d0c9a4,0x28(%eax)
 87221da:	c7 40 2c 77 15 d0 08 	movl   $0x8d01577,0x2c(%eax)
 87221e1:	c7 40 30 7e 15 d0 08 	movl   $0x8d0157e,0x30(%eax)
 87221e8:	c7 40 34 85 15 d0 08 	movl   $0x8d01585,0x34(%eax)
 87221ef:	c7 40 38 8d 15 d0 08 	movl   $0x8d0158d,0x38(%eax)
 87221f6:	c7 40 3c 97 15 d0 08 	movl   $0x8d01597,0x3c(%eax)
 87221fd:	c7 40 40 a0 15 d0 08 	movl   $0x8d015a0,0x40(%eax)
 8722204:	c7 40 44 a7 15 d0 08 	movl   $0x8d015a7,0x44(%eax)
 872220b:	c7 40 48 b0 15 d0 08 	movl   $0x8d015b0,0x48(%eax)
 8722212:	c7 40 4c b4 15 d0 08 	movl   $0x8d015b4,0x4c(%eax)
 8722219:	c7 40 50 b8 15 d0 08 	movl   $0x8d015b8,0x50(%eax)
 8722220:	c7 40 54 bc 15 d0 08 	movl   $0x8d015bc,0x54(%eax)
 8722227:	c7 40 58 c0 15 d0 08 	movl   $0x8d015c0,0x58(%eax)
 872222e:	c7 40 5c c4 15 d0 08 	movl   $0x8d015c4,0x5c(%eax)
 8722235:	c7 40 60 c8 15 d0 08 	movl   $0x8d015c8,0x60(%eax)
 872223c:	c7 40 64 cc 15 d0 08 	movl   $0x8d015cc,0x64(%eax)
 8722243:	c7 40 68 d4 15 d0 08 	movl   $0x8d015d4,0x68(%eax)
 872224a:	c7 40 6c dd 15 d0 08 	movl   $0x8d015dd,0x6c(%eax)
 8722251:	c7 40 70 e3 15 d0 08 	movl   $0x8d015e3,0x70(%eax)
 8722258:	c7 40 74 e9 15 d0 08 	movl   $0x8d015e9,0x74(%eax)
 872225f:	c7 40 78 ed 15 d0 08 	movl   $0x8d015ed,0x78(%eax)
 8722266:	c7 40 7c f2 15 d0 08 	movl   $0x8d015f2,0x7c(%eax)
 872226d:	c7 80 80 00 00 00 f7 	movl   $0x8d015f7,0x80(%eax)
 8722274:	15 d0 08 
 8722277:	c7 80 84 00 00 00 fe 	movl   $0x8d015fe,0x84(%eax)
 872227e:	15 d0 08 
 8722281:	c7 80 88 00 00 00 08 	movl   $0x8d01608,0x88(%eax)
 8722288:	16 d0 08 
 872228b:	c7 80 8c 00 00 00 10 	movl   $0x8d01610,0x8c(%eax)
 8722292:	16 d0 08 
 8722295:	c7 80 90 00 00 00 19 	movl   $0x8d01619,0x90(%eax)
 872229c:	16 d0 08 
 872229f:	c7 80 94 00 00 00 22 	movl   $0x8d01622,0x94(%eax)
 87222a6:	16 d0 08 
 87222a9:	c7 80 98 00 00 00 26 	movl   $0x8d01626,0x98(%eax)
 87222b0:	16 d0 08 
 87222b3:	c7 80 9c 00 00 00 2a 	movl   $0x8d0162a,0x9c(%eax)
 87222ba:	16 d0 08 
 87222bd:	c7 80 a0 00 00 00 2e 	movl   $0x8d0162e,0xa0(%eax)
 87222c4:	16 d0 08 
 87222c7:	c7 80 a4 00 00 00 e9 	movl   $0x8d015e9,0xa4(%eax)
 87222ce:	15 d0 08 
 87222d1:	c7 80 a8 00 00 00 32 	movl   $0x8d01632,0xa8(%eax)
 87222d8:	16 d0 08 
 87222db:	c7 80 ac 00 00 00 36 	movl   $0x8d01636,0xac(%eax)
 87222e2:	16 d0 08 
 87222e5:	c7 80 b0 00 00 00 3a 	movl   $0x8d0163a,0xb0(%eax)
 87222ec:	16 d0 08 
 87222ef:	c7 80 b4 00 00 00 3e 	movl   $0x8d0163e,0xb4(%eax)
 87222f6:	16 d0 08 
 87222f9:	c7 80 b8 00 00 00 42 	movl   $0x8d01642,0xb8(%eax)
 8722300:	16 d0 08 
 8722303:	c7 80 bc 00 00 00 46 	movl   $0x8d01646,0xbc(%eax)
 872230a:	16 d0 08 
 872230d:	c7 80 c0 00 00 00 4a 	movl   $0x8d0164a,0xc0(%eax)
 8722314:	16 d0 08 
 8722317:	83 c4 10             	add    $0x10,%esp
 872231a:	5b                   	pop    %ebx
 872231b:	5e                   	pop    %esi
 872231c:	5d                   	pop    %ebp
 872231d:	c3                   	ret
 872231e:	66 90                	xchg   %ax,%ax
 8722320:	c7 04 24 c8 00 00 00 	movl   $0xc8,(%esp)
 8722327:	e8 24 21 00 00       	call   8724450 <_Znwj>
 872232c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8722333:	c7 00 f0 f1 cf 08    	movl   $0x8cff1f0,(%eax)
 8722339:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8722340:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8722347:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 872234e:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8722355:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 872235c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8722363:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 872236a:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8722371:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8722378:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 872237f:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8722386:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 872238d:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 8722394:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 872239b:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 87223a2:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 87223a9:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 87223b0:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 87223b7:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 87223be:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 87223c5:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 87223cc:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 87223d3:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 87223da:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 87223e1:	c7 40 68 00 00 00 00 	movl   $0x0,0x68(%eax)
 87223e8:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 87223ef:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 87223f6:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 87223fd:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 8722404:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 872240b:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 8722412:	00 00 00 
 8722415:	c7 80 84 00 00 00 00 	movl   $0x0,0x84(%eax)
 872241c:	00 00 00 
 872241f:	c7 80 88 00 00 00 00 	movl   $0x0,0x88(%eax)
 8722426:	00 00 00 
 8722429:	c7 80 8c 00 00 00 00 	movl   $0x0,0x8c(%eax)
 8722430:	00 00 00 
 8722433:	c7 80 90 00 00 00 00 	movl   $0x0,0x90(%eax)
 872243a:	00 00 00 
 872243d:	c7 80 94 00 00 00 00 	movl   $0x0,0x94(%eax)
 8722444:	00 00 00 
 8722447:	c7 80 98 00 00 00 00 	movl   $0x0,0x98(%eax)
 872244e:	00 00 00 
 8722451:	c7 80 9c 00 00 00 00 	movl   $0x0,0x9c(%eax)
 8722458:	00 00 00 
 872245b:	c7 80 a0 00 00 00 00 	movl   $0x0,0xa0(%eax)
 8722462:	00 00 00 
 8722465:	c7 80 a4 00 00 00 00 	movl   $0x0,0xa4(%eax)
 872246c:	00 00 00 
 872246f:	c7 80 a8 00 00 00 00 	movl   $0x0,0xa8(%eax)
 8722476:	00 00 00 
 8722479:	c7 80 ac 00 00 00 00 	movl   $0x0,0xac(%eax)
 8722480:	00 00 00 
 8722483:	c7 80 b0 00 00 00 00 	movl   $0x0,0xb0(%eax)
 872248a:	00 00 00 
 872248d:	c7 80 b4 00 00 00 00 	movl   $0x0,0xb4(%eax)
 8722494:	00 00 00 
 8722497:	c7 80 b8 00 00 00 00 	movl   $0x0,0xb8(%eax)
 872249e:	00 00 00 
 87224a1:	c7 80 bc 00 00 00 00 	movl   $0x0,0xbc(%eax)
 87224a8:	00 00 00 
 87224ab:	c7 80 c0 00 00 00 00 	movl   $0x0,0xc0(%eax)
 87224b2:	00 00 00 
 87224b5:	c6 80 c4 00 00 00 00 	movb   $0x0,0xc4(%eax)
 87224bc:	89 43 08             	mov    %eax,0x8(%ebx)
 87224bf:	e9 e2 f7 ff ff       	jmp    8721ca6 <_ZNSt11__timepunctIcE23_M_initialize_timepunctEP15__locale_struct+0x16>
 87224c4:	90                   	nop
 87224c5:	90                   	nop
 87224c6:	90                   	nop
 87224c7:	90                   	nop
 87224c8:	90                   	nop
 87224c9:	90                   	nop
 87224ca:	90                   	nop
 87224cb:	90                   	nop
 87224cc:	90                   	nop
 87224cd:	90                   	nop
 87224ce:	90                   	nop
 87224cf:	90                   	nop

```

```c
// std::__timepunct<char>::_M_initialize_timepunct @ 0x8721c90

/* std::__timepunct<char>::_M_initialize_timepunct(__locale_struct*) */

void __thiscall
std::__timepunct<char>::_M_initialize_timepunct(__timepunct<char> *this,__locale_struct *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (*(int *)(this + 8) == 0) {
    puVar4 = operator_new(200);
    puVar4[1] = 0;
    *puVar4 = &PTR____timepunct_cache_08cff1f0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    puVar4[0x14] = 0;
    puVar4[0x15] = 0;
    puVar4[0x16] = 0;
    puVar4[0x17] = 0;
    puVar4[0x18] = 0;
    puVar4[0x19] = 0;
    puVar4[0x1a] = 0;
    puVar4[0x1b] = 0;
    puVar4[0x1c] = 0;
    puVar4[0x1d] = 0;
    puVar4[0x1e] = 0;
    puVar4[0x1f] = 0;
    puVar4[0x20] = 0;
    puVar4[0x21] = 0;
    puVar4[0x22] = 0;
    puVar4[0x23] = 0;
    puVar4[0x24] = 0;
    puVar4[0x25] = 0;
    puVar4[0x26] = 0;
    puVar4[0x27] = 0;
    puVar4[0x28] = 0;
    puVar4[0x29] = 0;
    puVar4[0x2a] = 0;
    puVar4[0x2b] = 0;
    puVar4[0x2c] = 0;
    puVar4[0x2d] = 0;
    puVar4[0x2e] = 0;
    puVar4[0x2f] = 0;
    puVar4[0x30] = 0;
    *(undefined1 *)(puVar4 + 0x31) = 0;
    *(undefined4 **)(this + 8) = puVar4;
  }
  if (param_1 != (__locale_struct *)0x0) {
    uVar3 = locale::facet::_S_clone_c_locale(&param_1);
    iVar1 = *(int *)(this + 8);
    *(undefined4 *)(this + 0xc) = uVar3;
    uVar3 = __nl_langinfo_l(0x20029,param_1);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002e,param_1);
    *(undefined4 *)(iVar1 + 0xc) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002a,param_1);
    *(undefined4 *)(iVar1 + 0x10) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20031,param_1);
    *(undefined4 *)(iVar1 + 0x14) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20028,param_1);
    *(undefined4 *)(iVar1 + 0x18) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20030,param_1);
    *(undefined4 *)(iVar1 + 0x1c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20026,param_1);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20027,param_1);
    *(undefined4 *)(iVar1 + 0x24) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2002b,param_1);
    *(undefined4 *)(iVar1 + 0x28) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20007,param_1);
    *(undefined4 *)(iVar1 + 0x2c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20008,param_1);
    *(undefined4 *)(iVar1 + 0x30) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20009,param_1);
    *(undefined4 *)(iVar1 + 0x34) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000a,param_1);
    *(undefined4 *)(iVar1 + 0x38) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000b,param_1);
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000c,param_1);
    *(undefined4 *)(iVar1 + 0x40) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000d,param_1);
    *(undefined4 *)(iVar1 + 0x44) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20000,param_1);
    *(undefined4 *)(iVar1 + 0x48) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20001,param_1);
    *(undefined4 *)(iVar1 + 0x4c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20002,param_1);
    *(undefined4 *)(iVar1 + 0x50) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20003,param_1);
    *(undefined4 *)(iVar1 + 0x54) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20004,param_1);
    *(undefined4 *)(iVar1 + 0x58) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20005,param_1);
    *(undefined4 *)(iVar1 + 0x5c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20006,param_1);
    *(undefined4 *)(iVar1 + 0x60) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001a,param_1);
    *(undefined4 *)(iVar1 + 100) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001b,param_1);
    *(undefined4 *)(iVar1 + 0x68) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001c,param_1);
    *(undefined4 *)(iVar1 + 0x6c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001d,param_1);
    *(undefined4 *)(iVar1 + 0x70) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001e,param_1);
    *(undefined4 *)(iVar1 + 0x74) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2001f,param_1);
    *(undefined4 *)(iVar1 + 0x78) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20020,param_1);
    *(undefined4 *)(iVar1 + 0x7c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20021,param_1);
    *(undefined4 *)(iVar1 + 0x80) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20022,param_1);
    *(undefined4 *)(iVar1 + 0x84) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20023,param_1);
    *(undefined4 *)(iVar1 + 0x88) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20024,param_1);
    *(undefined4 *)(iVar1 + 0x8c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20025,param_1);
    *(undefined4 *)(iVar1 + 0x90) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000e,param_1);
    *(undefined4 *)(iVar1 + 0x94) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x2000f,param_1);
    *(undefined4 *)(iVar1 + 0x98) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20010,param_1);
    *(undefined4 *)(iVar1 + 0x9c) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20011,param_1);
    *(undefined4 *)(iVar1 + 0xa0) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20012,param_1);
    *(undefined4 *)(iVar1 + 0xa4) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20013,param_1);
    *(undefined4 *)(iVar1 + 0xa8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20014,param_1);
    *(undefined4 *)(iVar1 + 0xac) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20015,param_1);
    *(undefined4 *)(iVar1 + 0xb0) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20016,param_1);
    *(undefined4 *)(iVar1 + 0xb4) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20017,param_1);
    *(undefined4 *)(iVar1 + 0xb8) = uVar3;
    iVar1 = *(int *)(this + 8);
    uVar3 = __nl_langinfo_l(0x20018,param_1);
    iVar2 = *(int *)(this + 8);
    *(undefined4 *)(iVar1 + 0xbc) = uVar3;
    uVar3 = __nl_langinfo_l(0x20019,param_1);
    *(undefined4 *)(iVar2 + 0xc0) = uVar3;
    return;
  }
  uVar3 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 0xc) = uVar3;
  iVar1 = *(int *)(this + 8);
  *(undefined **)(iVar1 + 8) = &DAT_08cfed42;
  *(undefined **)(iVar1 + 0xc) = &DAT_08cfed42;
  *(char **)(iVar1 + 0x10) = "%H:%M:%S";
  *(char **)(iVar1 + 0x14) = "%H:%M:%S";
  *(undefined1 **)(iVar1 + 0x18) = &DAT_08d0c9a4;
  *(undefined1 **)(iVar1 + 0x1c) = &DAT_08d0c9a4;
  *(undefined **)(iVar1 + 0x20) = &DAT_08de05df;
  *(undefined **)(iVar1 + 0x24) = &DAT_08d01574;
  *(undefined1 **)(iVar1 + 0x28) = &DAT_08d0c9a4;
  *(char **)(iVar1 + 0x2c) = "Sunday";
  *(char **)(iVar1 + 0x30) = "Monday";
  *(char **)(iVar1 + 0x34) = "Tuesday";
  *(char **)(iVar1 + 0x38) = "Wednesday";
  *(char **)(iVar1 + 0x3c) = "Thursday";
  *(char **)(iVar1 + 0x40) = "Friday";
  *(char **)(iVar1 + 0x44) = "Saturday";
  *(undefined **)(iVar1 + 0x48) = &DAT_08d015b0;
  *(undefined **)(iVar1 + 0x4c) = &DAT_08d015b4;
  *(undefined **)(iVar1 + 0x50) = &DAT_08d015b8;
  *(undefined **)(iVar1 + 0x54) = &DAT_08d015bc;
  *(undefined **)(iVar1 + 0x58) = &DAT_08d015c0;
  *(undefined **)(iVar1 + 0x5c) = &DAT_08d015c4;
  *(undefined **)(iVar1 + 0x60) = &DAT_08d015c8;
  *(char **)(iVar1 + 100) = "January";
  *(char **)(iVar1 + 0x68) = "February";
  *(char **)(iVar1 + 0x6c) = "March";
  *(char **)(iVar1 + 0x70) = "April";
  *(undefined **)(iVar1 + 0x74) = &DAT_08d015e9;
  *(undefined **)(iVar1 + 0x78) = &DAT_08d015ed;
  *(undefined **)(iVar1 + 0x7c) = &DAT_08d015f2;
  *(char **)(iVar1 + 0x80) = "August";
  *(char **)(iVar1 + 0x84) = "September";
  *(char **)(iVar1 + 0x88) = "October";
  *(char **)(iVar1 + 0x8c) = "November";
  *(char **)(iVar1 + 0x90) = "December";
  *(undefined **)(iVar1 + 0x94) = &DAT_08d01622;
  *(undefined **)(iVar1 + 0x98) = &DAT_08d01626;
  *(undefined **)(iVar1 + 0x9c) = &DAT_08d0162a;
  *(undefined **)(iVar1 + 0xa0) = &DAT_08d0162e;
  *(undefined **)(iVar1 + 0xa4) = &DAT_08d015e9;
  *(undefined **)(iVar1 + 0xa8) = &DAT_08d01632;
  *(undefined **)(iVar1 + 0xac) = &DAT_08d01636;
  *(undefined **)(iVar1 + 0xb0) = &DAT_08d0163a;
  *(undefined **)(iVar1 + 0xb4) = &DAT_08d0163e;
  *(undefined **)(iVar1 + 0xb8) = &DAT_08d01642;
  *(undefined **)(iVar1 + 0xbc) = &DAT_08d01646;
  *(undefined **)(iVar1 + 0xc0) = &DAT_08d0164a;
  return;
}

```

---

## _M_put

```asm
// === 08722520 std::__timepunct<char>::_M_put  [0x08722520-0x872255f] ===
 8722520:	55                   	push   %ebp
 8722521:	89 e5                	mov    %esp,%ebp
 8722523:	53                   	push   %ebx
 8722524:	83 ec 24             	sub    $0x24,%esp
 8722527:	8b 45 08             	mov    0x8(%ebp),%eax
 872252a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872252d:	8b 40 0c             	mov    0xc(%eax),%eax
 8722530:	89 1c 24             	mov    %ebx,(%esp)
 8722533:	89 44 24 10          	mov    %eax,0x10(%esp)
 8722537:	8b 45 18             	mov    0x18(%ebp),%eax
 872253a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872253e:	8b 45 14             	mov    0x14(%ebp),%eax
 8722541:	89 44 24 08          	mov    %eax,0x8(%esp)
 8722545:	8b 45 10             	mov    0x10(%ebp),%eax
 8722548:	89 44 24 04          	mov    %eax,0x4(%esp)
 872254c:	e8 5f ba 95 ff       	call   807dfb0 <__strftime_l@plt>
 8722551:	85 c0                	test   %eax,%eax
 8722553:	75 03                	jne    8722558 <_ZNKSt11__timepunctIcE6_M_putEPcjPKcPK2tm+0x38>
 8722555:	c6 03 00             	movb   $0x0,(%ebx)
 8722558:	83 c4 24             	add    $0x24,%esp
 872255b:	5b                   	pop    %ebx
 872255c:	5d                   	pop    %ebp
 872255d:	c3                   	ret
 872255e:	90                   	nop
 872255f:	90                   	nop

```

```c
// std::__timepunct<char>::_M_put @ 0x8722520

/* std::__timepunct<char>::_M_put(char*, unsigned int, char const*, tm const*) const */

void __thiscall
std::__timepunct<char>::_M_put
          (__timepunct<char> *this,char *param_1,uint param_2,char *param_3,tm *param_4)

{
  int iVar1;
  
  iVar1 = __strftime_l(param_1,param_2,param_3,param_4,*(undefined4 *)(this + 0xc));
  if (iVar1 == 0) {
    *param_1 = '\0';
  }
  return;
}

```

