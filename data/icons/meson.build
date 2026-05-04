install_subdir(
     'hicolor',
  install_dir : control_center_icondir
)

if get_option('profile') == 'development'
  icondir = join_paths('hicolor', 'scalable', 'apps')
  install_data(
    join_paths(icondir, 'io.github.scarecrow_de.Settings.Devel.svg'),
    install_dir: join_paths(control_center_icondir, icondir),
    rename: 'io.github.scarecrow_de.Settings.svg'
  )
endif
